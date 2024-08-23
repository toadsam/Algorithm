#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p;
        cin >> p;

        int n;
        cin >> n;

        string arr_str;
        cin >> arr_str;

        deque<int> dq;
        stringstream ss(arr_str.substr(1, arr_str.size() - 2));  // '['와 ']' 제거
        string item;
        while (getline(ss, item, ',')) {
            if (!item.empty()) {
                dq.push_back(stoi(item));
            }
        }

        bool error = false;
        bool reversed = false;

        for (char cmd : p) {
            if (cmd == 'R') {
                reversed = !reversed;
            } else if (cmd == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                }
                if (reversed) {
                    dq.pop_back();
                } else {
                    dq.pop_front();
                }
            }
        }

        if (error) {
            cout << "error" << endl;
        } else {
            cout << "[";
            while (!dq.empty()) {
                if (reversed) {
                    cout << dq.back();
                    dq.pop_back();
                } else {
                    cout << dq.front();
                    dq.pop_front();
                }
                if (!dq.empty()) {
                    cout << ",";
                }
            }
            cout << "]" << endl;
        }
    }

    return 0;
}
