#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    long long sum = 0;
    string str;
    const int M = 1234567891; // 모듈러 연산에 사용할 값
    const int r = 31; // 주어진 상수 값

    cin >> N;
    cin >> str;

    long long r_power = 1; // r의 거듭제곱을 저장할 변수
    for (int i = 0; i < N; i++) {
        int value = str[i] - 'a' + 1; // 각 문자의 값을 계산
        sum = (sum + value * r_power) % M; // 현재 합에 더하고 모듈러 연산
        r_power = (r_power * r) % M; // r의 다음 거듭제곱을 계산하고 모듈러 연산
    }

    cout << sum << '\n'; // 최종 해시 값을 출력
    return 0;
}