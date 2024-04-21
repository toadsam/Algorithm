#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s; // 입력 받기

    // 크로아티아 알파벳
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    int count = 0;
    for (int i = 0; i < s.length(); ) {
        bool found = false;
        // 크로아티아 알파벳과 매칭되는지 확인
        for (const string& c : croatian) {
            string sub = s.substr(i, c.length());
            if (sub == c) {
                count++; // 크로아티아 알파벳 발견
                i += c.length(); // 해당 알파벳 길이만큼 인덱스 이동
                found = true;
                break;
            }
        }
        if (!found) {
            count++; // 일반 알파벳으로 카운트
            i++;
        }
    }

    cout << count << endl; // 이거 아직도 모르겠어요....인터넷 봤는데 나중에 한번 더 풀어봐야 할 것 같아요....

    return 0;
}