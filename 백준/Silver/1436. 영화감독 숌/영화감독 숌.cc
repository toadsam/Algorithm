#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0; // '666'이 들어간 수를 카운트하기 위한 변수
    int num = 666; // 검사할 수

    while (true) {
        // 수를 문자열로 변환하여 '666'이 포함되어 있는지 확인
        string str = to_string(num);
        if (str.find("666") != string::npos) {
            // '666'이 포함되어 있으면 카운터 증가
            ++count;
            // N번째로 찾은 경우 출력하고 반복 종료
            if (count == N) {
                cout << num << endl;
                break;
            }
        }
        // 다음 수로 이동
        ++num;
    }

    return 0;
}