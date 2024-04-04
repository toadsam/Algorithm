#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> goodScore;
    for(int i = 0; i < score.size(); i ++)
    {
        goodScore.push_back(score[i]);
        sort(goodScore.begin(),goodScore.end());
        if(goodScore.size() <= k)
        {
            answer.push_back(goodScore[0]);
        }
        else{
            answer.push_back(goodScore[goodScore.size()-k]);
        }
    }
    return answer;
}