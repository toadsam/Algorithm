#include <string>
#include <vector>
#include <cctype>


using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isFirst = true;
    
    for (char c : s)
    {
        if(c == ' '){
            
            answer += c;
            isFirst = true;
        }
        else {
            if(isFirst)
            {
                answer += toupper(c);
                isFirst = false;
            }
            else
            {
                answer += tolower(c);
            }
        }
    }
    return answer;
}