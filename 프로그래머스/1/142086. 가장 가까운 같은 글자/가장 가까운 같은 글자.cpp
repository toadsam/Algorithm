#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.length(),0);
    answer[0] = -1;
    for(int i = 1; i < s.length(); i ++){
        for(int j = 0; j < i; j ++)
        {
            if(s[i] == s[j])
            {
                answer[i] = (i - j);
                
            }
            if(answer[i] == 0)
            {
                answer[i] = -1;
            }
        }
    }
    return answer;
}