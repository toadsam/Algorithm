#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }

    cout << count << endl;
    return 0;
} //이거는 다시 풀어봐야 할듯