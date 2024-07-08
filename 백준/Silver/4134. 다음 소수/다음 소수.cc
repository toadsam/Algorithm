#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long long n)
{
    if(n <= 1) return false; //소수가 아님
    if(n <= 3)return true; // 2와 3은 소수
    if(n%2 == 0 || n%3 == 0) return false; //2나 3으로 나눠떨어지면 소수
    
    for(long long i = 5; i * i <= n; i += 6)
    {
        if(n%i == 0|| n%(i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        while(!is_prime(n))
        {
            n++;
        }
        
        cout << n << '\n';
    }
    
    return 0;
}