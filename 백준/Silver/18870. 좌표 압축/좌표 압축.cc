#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
  
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> copy_arr = arr;
    
    sort(copy_arr.begin(), copy_arr.end());
    copy_arr.erase(unique(copy_arr.begin(), copy_arr.end()),copy_arr.end());

    unordered_map<int, int> map;
    
    for (int i = 0; i < copy_arr.size(); ++i) {
        map[copy_arr[i]] = i;
    }


    for (int i = 0; i < n; ++i) {
        cout << map[arr[i]] << " ";
    }
    cout << endl;

    return 0;
}
