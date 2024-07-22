#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b, int gcd)
{
    return(a*b)/gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    int gcdValue = gcd(a,b);
    int lcmValue = lcm(a,b,gcdValue);
    
    cout << gcdValue << endl;
    cout << lcmValue << endl;
    
    return 0;
}