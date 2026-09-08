#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;


    for(int i = 1; i < N;i ++)
    {
        int sum = i;
        int each =i;
        int each_sum = 0;
        while(each > 0)
        {
            each_sum += each%10;
            each /= 10;
        }

        sum += each_sum;

        if(sum == N)
        {
            cout << i ;
            return 0;
        }
    }
    cout << 0;
}
