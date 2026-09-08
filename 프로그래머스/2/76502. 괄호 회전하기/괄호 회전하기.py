def solution(s):
    answer = 0

    # 문자열 길이만큼 회전
    for i in range(len(s)):
        n = []
        is_valid = True

        # 현재 문자열의 괄호 하나씩 확인
        for j in s:

            # 여는 괄호면 n에 넣기
            if j == '(':
                n.append(j)

            elif j == '{':
                n.append(j)

            elif j == '[':
                n.append(j)

            # 닫는 괄호가 나오면
            # n의 마지막 값과 짝이 맞는지 확인
            elif j == ')':
                if n and n[-1] == '(':
                    n.pop()
                else:
                    is_valid = False
                    break

            elif j == '}':
                if n and n[-1] == '{':
                    n.pop()
                else:
                    is_valid = False
                    break

            elif j == ']':
                if n and n[-1] == '[':
                    n.pop()
                else:
                    is_valid = False
                    break

        # 끝까지 문제 없었고
        # n에 남은 괄호가 없다면 올바른 괄호
        if is_valid and len(n) == 0:
            answer += 1

        # 문자열 왼쪽으로 한 칸 회전
        s = s[1:] + s[0]

    return answer
