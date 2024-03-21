#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for(int i = 0; i < s.length(); i ++)
    {
        if(s[i] == ' ')
        {
            index = 0;
            continue;
        }
        
        if(index % 2 == 0)
        {
            if(s[i] >= 97 && s[i] <= 122)
            { s[i] -= 32;}
            
            
        }
        else
        {
            if(s[i] >= 65 && s[i] <= 96)
            {
                s[i] += 32;
                
            }
            //홀수면 소문자
        }
        
        index += 1;
        
    }
    answer = s;
    return answer;
}