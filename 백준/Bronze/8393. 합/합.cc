#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int n;
    int sum = 0;
    
    cin >> n;
    
    for(int i = 0; i < n+1;i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}