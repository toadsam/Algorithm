#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // 예외 처리: 입력된 N이 0인 경우
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    
    sort(scores.begin(), scores.end());
    
    // 절사할 점수의 개수
    int trim = (N * 15 + 50) / 100; // 반올림 처리
    
    // 예외 처리: N이 작아서 절사할 점수 개수가 전체를 차지하는 경우
    if (trim * 2 >= N) {
        cout << 0 << endl;
        return 0;
    }

    // 절사된 평균 계산
    int sum = 0;
    for (int i = trim; i < N - trim; i++) {
        sum += scores[i];
    }
    
    int count = N - 2 * trim;
    
    // count가 0이 되는 경우 방지
    if (count == 0) {
        cout << 0 << endl;
    } else {
        int trimmed_mean = (sum + count / 2) / count; // 반올림된 평균 계산
        cout << trimmed_mean << endl;
    }
    
    return 0;
}
