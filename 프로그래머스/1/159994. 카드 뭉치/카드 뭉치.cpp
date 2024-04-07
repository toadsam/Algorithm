#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int first = 0;
    int second = 0;
    for(int i  = 0; i < goal.size(); i++)
    {
        if(goal[i] == cards1[first])
        {
            first++;
        }
        else if(goal[i] == cards2[second])
        {
            second++;
        }else
        {
            answer = "No";
            break;
        }
        
    }
    
    return answer;
}