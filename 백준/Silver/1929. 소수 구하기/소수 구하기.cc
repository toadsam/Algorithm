#include <iostream>
#include <vector>
using namespace std;

void sieve_of_eratosthenes(int M, int N) {
    vector<bool> is_prime(N + 1, true); 
    is_prime[0] = is_prime[1] = false;  

    
    for (int i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false; 
            }
        }
    }

    
    for (int i = M; i <= N; ++i) {
        if (is_prime[i]) {
            cout << i << '\n'; 
        }
    }
}

int main() {
    int M, N;
    cin >> M >> N; 
    sieve_of_eratosthenes(M, N); 
    return 0;
}