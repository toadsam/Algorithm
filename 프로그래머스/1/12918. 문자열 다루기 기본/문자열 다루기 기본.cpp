#include <string>
#include <cctype>

using namespace std;

bool solution(string s) {
    // 문자열의 길이가 4 또는 6이 아니면 false 반환
    if(s.size() != 4 && s.size() != 6)
        return false;
    
    // 모든 문자가 숫자인지 확인
    for(char c : s) {
        if(!isdigit(c)) {
            return false; // 숫자가 아닌 문자가 있으면 false 반환
        }
    }
    
    return true; // 모든 문자가 숫자이면 true 반환
}