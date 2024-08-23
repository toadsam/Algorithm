#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int n, m;
        cin >> n >> m;
        
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        for (int i = 0; i < n; i++) {
            int priority;
            cin >> priority;
            q.push({priority, i});
            pq.push(priority);
        }
        
        int print_order = 0;
        
        while (!q.empty()) {
            int current_priority = q.front().first;
            int current_index = q.front().second;
            q.pop();
            
            if (current_priority == pq.top()) {
                pq.pop();
                print_order++;
                
                if (current_index == m) {
                    cout << print_order << endl;
                    break;
                }
            } else {
                q.push({current_priority, current_index});
            }
        }
    }
    
    return 0;
}
