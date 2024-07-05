#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int A,B,C,D;
    cin >> A >> B;
    cin >> C >> D;
    
    int mole, deno;
    mole = (A * D) + (B * C);
    deno = (B * D);
    int g = gcd(mole,deno);
    
    cout << mole/g << " " << deno/g;
}