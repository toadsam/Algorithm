#include<iostream>

using namespace std;

int main(){
    int m,n;
    int minValue = -1;
    int sum = 0;
    bool isMinValue = false;
    
    
    cin >> m >> n;
    
    for(int i = m; i <= n; i++)
    {
        bool isPrime = true;
        if(i == 1){
          isPrime = false;  
        } 
        for(int j = 2; j < i ; j++)
        {
            if(i%j == 0)
            {
                isPrime = false;
                break;
            }
            
          
        }
        if(isPrime)
            {
                sum += i;
                if(!isMinValue)
            {
                minValue = i;
                isMinValue = !isMinValue;
            }
            }
        
    }
    
    if(!isMinValue)
    {
        cout << -1;
    }
    else{
        cout << sum << endl;
        cout << minValue;
        
    }
}
