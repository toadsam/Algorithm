#include <string>
#include <vector>
#include <algorithm>
#include <functional> 
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    int index = m-1;
    sort(score.begin(), score.end(), std::greater<>());
    while(true)
    {
        if(score.size() < index)
        {
            break;
        }
        answer +=score[index]*m;
        index += m;
    }
    
    
    return answer;
}