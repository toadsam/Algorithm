#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer = {0,0};
   int equalNum = 0;
    int zeroNum = 0;
    int goodScore = 0;
    int badScore = 0;

    for (int i = 0; i < lottos.size(); i++) {
        for (int j = 0; j < win_nums.size(); j++) {
            if (win_nums[j] == lottos[i]) {
                equalNum++;
            }
        }
        if (lottos[i] == 0) {
            zeroNum++;
        }
    }

    goodScore = equalNum + zeroNum;
    badScore = equalNum;

    
    if (goodScore == 6)
        answer[0] = 1;
    else if (goodScore == 5)
        answer[0] = 2;
    else if (goodScore == 4)
        answer[0] = 3;
    else if (goodScore == 3)
        answer[0] = 4;
    else if (goodScore == 2)
        answer[0] = 5;
    else if (goodScore < 2)
        answer[0] = 6;

  
    if (badScore == 6)
        answer[1] = 1;
    else if (badScore == 5)
        answer[1] = 2;
    else if (badScore == 4)
        answer[1] = 3;
    else if (badScore == 3)
        answer[1] = 4;
    else if (badScore == 2)
        answer[1] = 5;
    else if (badScore < 2)
        answer[1] = 6;

    return answer;
}