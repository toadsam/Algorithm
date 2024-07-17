#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string num;
        cin >> num;

        if (num == "0") break;

        bool is_palindrome = true;
        int len = num.length();

        for (int i = 0; i < len / 2; ++i) {
            if (num[i] != num[len - 1 - i]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}