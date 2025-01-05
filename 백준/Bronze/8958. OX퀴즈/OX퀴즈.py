n = int(input())

# 각 테스트 케이스를 처리
for _ in range(n):
    quiz = input()  # OX퀴즈 결과 문자열 입력
    score = 0       # 총 점수
    consecutive = 0 # 연속된 O의 점수

    for char in quiz:
        if char == 'O':
            consecutive += 1  # 연속된 O의 개수 증가
            score += consecutive  # 현재 연속 점수 더하기
        else:
            consecutive = 0  # 연속 끊기면 초기화

    print(score)  # 총 점수 출력