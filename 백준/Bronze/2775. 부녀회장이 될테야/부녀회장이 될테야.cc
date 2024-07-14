#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k >> n;
        
        int apt[15][15] = {0};

        // 0층 초기화
        for (int i = 1; i <= 14; ++i) {
            apt[0][i] = i;
        }

        // 아파트 거주자 수 계산
        for (int i = 1; i <= 14; ++i) {
            for (int j = 1; j <= 14; ++j) {
                apt[i][j] = apt[i-1][j] + apt[i][j-1];
            }
        }

        cout << apt[k][n] << endl;
    }

    return 0;
}