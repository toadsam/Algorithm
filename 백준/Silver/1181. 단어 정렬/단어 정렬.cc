#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    sort(words.begin(), words.end());

    words.erase(unique(words.begin(), words.end()), words.end());

    sort(words.begin(), words.end(), [](const string &a, const string &b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
});

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }

    return 0;
}