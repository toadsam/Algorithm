#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skipSet(skip.begin(), skip.end());

    for (char c : s) {
        for (int i = 0; i < index; ++i) {
            do {
                c = (c == 'z') ? 'a' : c + 1;
            } while (skipSet.find(c) != skipSet.end());
        }
        answer += c;
    }

    return answer;
}
