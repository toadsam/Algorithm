#include<iostream>

using namespace std;

int main()
{
    int N,k;
    int index= 0;
    int answer = 0;
    
    cin >> N >> k;
    
    for(int i = 1 ; i <= N; i ++ )
    {
        if(N%i == 0)
        {
            index ++;
            if(index == k)
            {
                answer = i;
                break;
            }
        }
}
    cout << answer;
    return 0;
}