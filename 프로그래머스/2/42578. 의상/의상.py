from collections import Counter

def solution(clothes):

    answer = 1
    type = []
    #type = [for clothes[1] in clothes]
    for clothe in clothes:
        type.append(clothe[1])

    c_type = Counter(type)

    for i in c_type.values():
        answer *=i+1

    return answer-1

# 각 유형별로 모은다 몇개가 있는지 알아보기, 그렇게 하고, 각 유형 + 1 로 각각을 곱하고 answer에서 -1을 해주면 되지 않을까?
