#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    map<string, string> people;

    for (int i = 0; i < n; ++i) {
        string name, action;
        cin >> name >> action;
        people[name] = action;
    }

    vector<string> presentPeople;
    for (const auto& entry : people) {
        if (entry.second == "enter") {
            presentPeople.push_back(entry.first);
        }
    }

    sort(presentPeople.begin(), presentPeople.end(), greater<string>());

    for (const string& name : presentPeople) {
        cout << name << '\n';
    }

    return 0;
}
