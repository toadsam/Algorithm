#include<iostream>

using namespace std;

int main()
{
    int n, number;
    int answer = 0;
   
    cin >> n ;
    
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        if(number == 1)
        {
           continue;
            
        }
        bool isMin = true;
        for(int j = 2; j < number; j ++ )
        {
            
            if(number%j == 0)
            {
                isMin = false;
            }
        }
        
        if(isMin)
        {
            answer++;
        }
    }
    
    cout << answer;
}