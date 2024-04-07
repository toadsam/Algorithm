#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    
    cin >> a >> b >> c;
    
    vector<int> num = {a,b,c};
    sort(num.begin(),num.end());
    
    if(num[2] >= num[0] + num[1])
    {
        num[2] = num[0] + num[1] -1;
    }
    
    cout << num[0] + num[1] + num[2];
    
    
}