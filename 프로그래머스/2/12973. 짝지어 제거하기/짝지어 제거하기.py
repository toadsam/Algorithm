def solution(s):
    answer = []

    for i in s:
        if not answer:
            answer.append(i)

        elif answer[-1] == i:
            answer.pop()

        else:
            answer.append(i)

    if answer:
        return 0
    else:
        return 1
