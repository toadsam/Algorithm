#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 에라토스테네스의 체를 사용하여 소수 목록 생성
vector<bool> sieve(int max) {
    vector<bool> is_prime(max + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<int> numbers(T);
    int max_n = 0;

    for (int i = 0; i < T; ++i) {
        cin >> numbers[i];
        if (numbers[i] > max_n) {
            max_n = numbers[i];
        }
    }

    // 소수 목록 생성
    vector<bool> is_prime = sieve(max_n);

    for (int n : numbers) {
        int count = 0;
        for (int i = 2; i <= n / 2; ++i) {
            if (is_prime[i] && is_prime[n - i]) {
                ++count;
            }
        }
        cout << count << "\n";
    }

    return 0;
}