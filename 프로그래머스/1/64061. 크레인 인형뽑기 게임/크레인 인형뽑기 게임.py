def solution(board, moves):
    answer = 0
    result = []

    for i in moves:
        for j in range(len(board[0])):
            if j + 1 == i:

                for k in range(len(board)):
                    if board[k][j] != 0:

                        # 현재 인형 저장
                        doll = board[k][j]

                        # 인형 뽑았으니까 해당 자리 비우기
                        board[k][j] = 0

                        # 바구니가 비어있지 않고
                        # 맨 위 인형과 현재 인형이 같다면
                        if result and result[-1] == doll:
                            result.pop()
                            answer += 2

                        else:
                            result.append(doll)

                        # 인형 하나 뽑았으니 끝
                        break

    return answer
