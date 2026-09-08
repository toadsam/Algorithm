#그냥 dfs로 풀면 될 것 같은데, 각 몇번째 값을 계산해야 하고 지금 total값이 얼마인지만 알려주면 될 것 같다
def solution(numbers, target):
    answer = 0

    def dfs(i,total):
        nonlocal answer
        if i == len(numbers):
            if total == target:
                answer+=1
                return
            else:
                return

        dfs(i+1,total+numbers[i])
        dfs(i+1,total-numbers[i])

    dfs(0,0)

    return answer
