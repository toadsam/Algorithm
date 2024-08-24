#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ports(m);
    for (int i = 0; i < m; i++) {
        cin >> ports[i];
    }

    
    int total_ports = accumulate(ports.begin(), ports.end(), 0, [](int sum, int x) {
        return sum + (x + 1) / 2;
    });

  
    if (total_ports >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
