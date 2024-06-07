#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    set<string> substrs;
    
    for(int i = 0; i < s.size(); i++)
    {
        string str = "";
        for(int j = i; j < s.size(); j++)
        {
            str += s[j];
            substrs.insert(str);
        }
    }
    
    cout << substrs.size() << '\n';
    
    return 0;
}