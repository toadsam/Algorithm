def solution(progresses, speeds):
    # 일단 각각 몇 일이 걸리는지가 중요할 것 같아
    # 각각 몇 일이 걸리는지를 구하고,
    # 그걸 배열값에 넣고 조건문에 맞으면 count의 값에 따라 정하고
    # 그걸 넣은 배열이 정답이다.

    re_day = []
    answer = []

    for i in range(len(progresses)):

        if (100 - progresses[i]) % speeds[i] != 0:

            reamin = (100 - progresses[i]) // speeds[i] + 1
            re_day.append(reamin)

        else:
            remain = (100 - progresses[i]) // speeds[i]
            re_day.append(remain)
    count = 1
    for i in range(len(re_day)-1):
        if re_day[i] >= re_day[i+1]:
            re_day[i+1] = re_day[i]
            count +=1
        else:
            answer.append(count)
            count = 1
    answer.append(count)

    return answer
