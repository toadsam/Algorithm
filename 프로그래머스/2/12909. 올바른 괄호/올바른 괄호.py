# 처음에 ( 이게들어오면 [0]을 봤는데 (면 )랑 해서 같이 없애기 그랬는데 보니깐 결국 비어있으면 맞는 거겠지

def solution(s):
    answer = True

    num = []

    for i in s:
        if i == "(":
            num.append("(")
        elif i == ")":
            if num and num[0] == "(":
                num.pop()
            else:
                return False

    if not num:
        return True
    else:
        return False
