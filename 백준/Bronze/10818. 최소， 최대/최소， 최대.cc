#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){
     ios_base::sync_with_stdio(0);
    
    int min = 1000001;
    int max = -1000001;
    
    int N;
    cin >> N;
    
    int inputValue;
    for(int i = 0; i < N; i ++){
        cin >> inputValue;
        
        if(inputValue < min){
            min  = inputValue;
}
        if(inputValue > max){
            max = inputValue;
        }
    }
    
    cout << min << " " << max;
    return 0;
    
}