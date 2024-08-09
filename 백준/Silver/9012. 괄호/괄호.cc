#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isVaild(string s)
{
    stack<char> stk;
    for(char c : s)
    {
        if(c == '(')
        {
            stk.push(c);
        } else if(c == ')')
        {
            if(stk.empty())
            {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        if(isVaild(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}