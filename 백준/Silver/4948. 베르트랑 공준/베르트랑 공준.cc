#include <iostream>
#include <vector>

using namespace std;

// 함수 선언
vector<bool> sieve(int max_num);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAX_N = 123456;
    const int MAX_2N = 2 * MAX_N;

    // 에라토스테네스의 체로 소수 구하기
    vector<bool> is_prime = sieve(MAX_2N);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        int count = 0;
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (is_prime[i]) {
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}

// 함수 정의
vector<bool> sieve(int max_num) {
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false; // 0과 1은 소수가 아님
    for (int i = 2; i * i <= max_num; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}
