#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    vector<string> v;

    // 1. 숫자를 문자열로 바꾸기
    for (int num : numbers) {
        v.push_back(to_string(num));
    }

    // 2. 두 문자열 a, b를 붙여보고 더 큰 순서로 정렬
    sort(v.begin(), v.end(), [](string a, string b) {
        return a + b > b + a;
    });

    // 3. 정렬된 문자열들을 하나로 합치기
    string answer = "";

    for (string s : v) {
        answer += s;
    }

    // 4. 전부 0인 경우 처리
    if (answer[0] == '0') {
        return "0";
    }

    return answer;
}
