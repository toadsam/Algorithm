#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> freqX(10, 0);  // X의 각 숫자별 빈도수
    vector<int> freqY(10, 0);  // Y의 각 숫자별 빈도수

    // 각 숫자별 빈도수 계산
    for (char ch : X) freqX[ch - '0']++;
    for (char ch : Y) freqY[ch - '0']++;

    // 공통된 숫자 추출
    for (int num = 0; num <= 9; num++) {
        int common = min(freqX[num], freqY[num]);  // 공통된 숫자의 최소 개수
        for (int i = 0; i < common; i++) {
            answer += to_string(num);
        }
    }

    // 결과가 비어 있으면 "0" 반환
    if (answer.empty()) return "-1";

    // 내림차순으로 정렬하여 가장 큰 수 생성
    sort(answer.rbegin(), answer.rend());
    if(answer[0] == '0')return"0";

    return answer;
}