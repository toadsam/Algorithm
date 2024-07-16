#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int N;
    long sum = 0;
    string str;
    
    cin >> N;
    cin >> str;
    for(int i = 0 ; i < str.length() ; i++)
    {
        int value = str[i] - 'a' + 1;
        sum += pow(31,i)*value;
        
    }
    
    cout << sum << '\n';
    return 0;
}