#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, num;
    cin >> n;

    unordered_set<int> numbers;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.insert(num);
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> num;
        if (numbers.find(num) != numbers.end()) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
