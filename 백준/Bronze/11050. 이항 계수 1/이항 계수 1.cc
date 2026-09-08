#include<iostream>

using namespace std;

int fac(int n)
{
    int result = 1;
    for(int i = n; i >= 1; i--)
    {
        result*=i;
    }
    return result;
}

int answer(int n, int k)
{
    return fac(n)/(fac(k)*fac(n-k));
}

int main()
{
    int n,k;
    cin >> n;
    cin >> k;

    cout << answer(n,k) << "\n";

    return 0;
}
