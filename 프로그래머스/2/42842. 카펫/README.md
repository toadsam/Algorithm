# [level 2] 카펫 - 42842

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/42842)

### 사용 언어

C++

### 풀이 이력

- 2026-02-18 풀이

### 풀이 메모

노란색 영역의 약수쌍 (a, b)를 sqrt(yellow)까지 탐색해 (w, h) = (a+2, b+2) 후보를 만들고, w*h == brown+yellow 인지로 검증한다.

- brown + yellow = w * h
- (w + h - 2) * 2 = brown

약수는 항상 짝이 있으므로 sqrt까지만 돌면 모든 조합을 커버한다.

---

이 풀이는 Notion 학습 노트 `🙃 알고리즘 공부`에만 남아 있던 기록을 저장소로 옮겨온 것입니다.
BaekjoonHub 자동 업로드분이 아니므로 채점 성능(시간/메모리) 정보는 포함되어 있지 않습니다.
