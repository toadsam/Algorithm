#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    int N, M;
    cin >> N >> M;
    unordered_map<string, int> nameToNumber;
    vector<string> numberToName(N + 1);
    string name;
    for (int i = 1; i <= N; ++i) {
        cin >> name;
        nameToNumber[name] = i;
        numberToName[i] = name;
    }
    
    string query;
    for (int i = 0; i < M; ++i) {
        cin >> query;
        if (isdigit(query[0])) {
            int num = stoi(query);
            cout << numberToName[num] << '\n';
        } else {
            cout << nameToNumber[query] << '\n';
        }
    }
    
    return 0;
}
