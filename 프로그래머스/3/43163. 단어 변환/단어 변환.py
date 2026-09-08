from collections import deque

def can_change(word1,word2):
    different_count = 0

    for i in range(len(word1)):
        if word1[i] != word2[i]:
            different_count += 1

    return different_count == 1

def solution(begin, target, words):
    visited = [False] * len(words)

    queue = deque()
    queue.append((begin,0))

    while queue:
        current_word, count = queue.popleft()

        if current_word == target:
            return count

        for i in range(len(words)):
            if visited[i]:
                continue

            if can_change(current_word, words[i]):
                visited[i] = True
                queue.append((words[i], count+1))
    return 0
