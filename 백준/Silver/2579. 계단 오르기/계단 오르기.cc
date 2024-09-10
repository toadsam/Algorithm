#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int score[301] = {0};  // 각 계단의 점수를 저장하는 배열
    int dp[301] = {0};     // 각 계단까지의 최대 점수를 저장하는 DP 배열
    
    for (int i = 1; i <= N; i++) {
        cin >> score[i];
    }

    // DP 초기값 설정
    dp[1] = score[1];
    if (N >= 2) {
        dp[2] = score[1] + score[2];
    }
    
    // DP 점화식을 이용한 최대값 계산
    for (int i = 3; i <= N; i++) {
        dp[i] = max(dp[i-2], dp[i-3] + score[i-1]) + score[i];
    }
    
    // 마지막 계단에서의 최대 점수를 출력
    cout << dp[N] << "\n";
    
    return 0;
}
