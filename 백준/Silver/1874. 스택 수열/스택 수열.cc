#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> sequence(n);  
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    stack<int> s;
    vector<char> result;  
    int current = 1;  

    for (int i = 0; i < n; ++i) {
        int target = sequence[i];

      
        while (current <= target) {
            s.push(current);
            result.push_back('+');
            current++;
        }

       
        if (!s.empty() && s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            
            cout << "NO" << endl;
            return 0;
        }
    }

    
    for (char c : result) {
        cout << c << '\n';
    }

    return 0;
}
