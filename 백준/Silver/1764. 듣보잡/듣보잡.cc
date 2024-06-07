#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    set<string> unheard;
    vector<string> result;
    
    for(int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        unheard.insert(name);
    }
    
    for(int i = 0; i < m; i++)
    {
        string name;
        cin >> name;
        if(unheard.find(name) != unheard.end())
        {
            result.push_back(name);
        }
    }
    sort(result.begin(),result.end());
    
    cout << result.size() << '\n';
    for(const string &name : result)
    {
        cout << name << '\n';
    }
    return 0;
}