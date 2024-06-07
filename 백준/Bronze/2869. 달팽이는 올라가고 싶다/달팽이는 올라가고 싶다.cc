#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int A, B, V;
    cin >> A >> B >> V;
    
    // 정상에 도달하는 데 필요한 총 일수 계산
    int days = (V - B - 1) / (A - B) + 1;
    
    cout << days << '\n';
    
    return 0;
}
  //코드를 배낌