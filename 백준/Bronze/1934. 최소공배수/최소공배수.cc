#include <iostream>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n; 
    
    while (n != 0) {
        int a, b;
        cin >> a >> b;
        cout << (a*b)/gcd(a,b) << '\n';
        n--;
    }
    
    return 0;
}
