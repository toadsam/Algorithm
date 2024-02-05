#include <iostream>
using namespace std;

int main(){
    int n,m;
    int a,b;
    
    cin >> n >> m;
    int basket[n+1];
    for(int i = 1; i < n+1; i++){
        basket[i] = i;
    }
    
    while(m--){
        cin >> a >> b;
        if(a != b){
            for(int i =0; i <= (b-a)/2 ; i ++){
                swap(basket[a+i],basket[b-i]);
            }
        }
    }
    for(int i =1; i<n+1; i++){
        cout << basket[i] << ' ';
    }
    return 0;
}