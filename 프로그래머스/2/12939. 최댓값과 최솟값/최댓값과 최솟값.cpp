#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s)
{
    stringstream ss(s);
    int x;
    int mn =0,mx=0;
    bool first = true;

    while (ss >> x){
        if(first){
            mn = mx = x;
            first = false;
        }
        else {
            mn = min(mn,x);
            mx = max(mx,x);
        }
    }

    return to_string(mn) + " " + to_string(mx);
}
