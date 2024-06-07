#include<iostream>
#include<set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    set<int> setA;
    set<int> setB;
    
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        setA.insert(a);
    }
    for(int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        setB.insert(a);
    }
    
    int result = 0;
    for(const int &a : setA)
    {
        if(setB.find(a)== setB.end())
        {
            result++;
        }
    }
    
    for(const int &a : setB)
    {
        if(setA.find(a) == setA.end())
        {
            result++;
        }
    }
    
    cout << result << '\n';
    
    return 0;
}