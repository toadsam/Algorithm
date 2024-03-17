#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a,b,c;
    
    a = n;
    b = m;
    
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    
    answer.push_back(a);
    answer.push_back(n*m/a);
    
    return answer;
}