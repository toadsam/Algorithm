#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> n;
    int input;
    int max = M;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        n.push_back(input);
    }

    for(int i = 0; i < N-2; i++)
    {
        for(int j = i +1; j < N-1; j++)
        {
            for(int k = j + 1; k < N; k++)
            {
                if(n[i] + n[j] + n[k] <= M)
                {
                    if(M - (n[i] + n[j] + n[k]) <= max )
                    {
                        max = M - (n[i] + n[j] + n[k]);
                    }
                }
            }
        }

    }
       cout << M - max;
}
