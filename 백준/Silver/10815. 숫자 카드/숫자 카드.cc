#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> my(n);
    
    for(int i = 0 ; i < n; i++) {
        cin >> my[i];
    }

    sort(my.begin(), my.end());  

    int m;
    cin >> m;
    vector<int> isHave(m);  

    for (int i = 0; i < m; i++) {
        cin >> isHave[i];  
    }

    for (int i = 0; i < m; i++) {
        if (binary_search(my.begin(), my.end(), isHave[i])) {
            cout << 1 << ' ';
        } else {
            cout << 0 << ' ';
        }
    }


    return 0;
}
