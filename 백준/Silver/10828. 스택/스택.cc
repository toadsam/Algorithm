#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> s;

    for(int i = 0; i < n; i++)
    {
        string answer;
        cin >> answer;

        if(answer == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if(answer == "pop")
        {
            if(s.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if (answer == "size") {
            cout << s.size() << endl;
        }
        else if (answer == "empty") {
            cout << s.empty() << endl;
        }
        else if (answer == "top") {
            if (s.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << s.top() << endl;
            }
    }
}
}
