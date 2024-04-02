#include <string>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string solution(vector<int> food) {
    vector<int>num;
    string answer = "";
    for(int i = 1 ; i < food.size(); i++)
    {
        for(int j = 0; j < food[i]/2; j ++)
        {
        num.push_back(i);
        answer += to_string(i);
        }
    }
    answer += "0";
    
    for(int i = num.size()-1; i >= 0 ; i--)
    {
        answer += to_string(num[i]);
    }
    return answer;
}