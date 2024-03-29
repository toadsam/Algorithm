#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int answer = 0;
    cin >> n;
    vector<int>x;
    vector<int>y;
    
    for(int i =0; i < n; i++)
    {
        
        int a = 0;
        int b = 0;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
         
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    answer = (x[x.size()-1] - x[0]) * (y[y.size()-1] - y[0]);
    cout << answer;
    
    
    return 0;
}