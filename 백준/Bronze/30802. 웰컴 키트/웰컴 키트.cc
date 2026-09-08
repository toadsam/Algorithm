#include<iostream>

using namespace std;
int main()
{
    int N;
    int size[6];
    int T,P;

    cin >> N;
    for(int i = 0; i < 6; i++)
    {
        cin >> size[i];
    }
    cin >> T >> P;

    int min = 0;
    for(int i = 0; i < 6; i ++)
    {
        if(size[i]%T == 0)
            min += size[i]/T;
        else
            min += size[i]/T +1;
    }

    cout << min << "\n";
    cout << N/P << " " << N%P;

    return 0;



}
