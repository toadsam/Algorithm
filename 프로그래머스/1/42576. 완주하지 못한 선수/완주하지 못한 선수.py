from collections import Counter

def solution(participant, completion):
    p_num = Counter(participant)
    c_num = Counter(completion)

    answer = p_num - c_num

    return list(answer.keys())[0]
