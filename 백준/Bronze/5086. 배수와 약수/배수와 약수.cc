#include<iostream>

using namespace std;

int main()
{
    int a,b;
    
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;
        if(a>b&&a%b==0)
        {
            cout << "multiple" << endl;
        }
        else if(a<b&&b%a==0){
            cout << "factor"<< endl;
        }
        else{
            cout << "neither"<< endl;
        }
        
    }
    return 0;
}