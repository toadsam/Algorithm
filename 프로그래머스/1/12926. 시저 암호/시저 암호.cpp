#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.length(); i++)
    {
     if(s[i] == ' ')
     {
         continue;
     }
     else if(s[i] + n > 90 && s[i] <= 90 )
     {
         s[i] = 64 + (s[i] + n - 90);
     }
    else if(s[i] + n > 122)
    {
        s[i] = 96 + (s[i] + n - 122);
        
    }
    else
    {
        s[i] += n;
    }
        
        
    }
    return s;
}