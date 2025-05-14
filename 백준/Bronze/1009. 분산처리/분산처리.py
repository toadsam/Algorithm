T = int(input())

# 각 숫자의 끝자리 주기 저장
patterns = {
    0: [10],  # 문제 조건: 결과가 0이면 10 출력
    1: [1],
    2: [2, 4, 8, 6],
    3: [3, 9, 7, 1],
    4: [4, 6],
    5: [5],
    6: [6],
    7: [7, 9, 3, 1],
    8: [8, 4, 2, 6],
    9: [9, 1]
}

for _ in range(T):
    a, b = map(int, input().split())
    last_digit = a % 10
    pattern = patterns[last_digit]
    idx = (b - 1) % len(pattern)  # 인덱스는 0부터 시작하니까 b-1
    print(pattern[idx])
