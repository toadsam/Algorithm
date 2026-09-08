#include <vector>
#include <queue>
#include <functional>
using namespace std;

int solution(vector<int> players, int m, int k) {
    priority_queue<int, vector<int>, greater<int>> pq; // 증설 서버들의 종료시간
    int answer = 0;

    for (int i = 0; i < (int)players.size(); i++) {

        // 1) 만료된(종료시간 <= i) 증설 서버 제거
        while (!pq.empty() && pq.top() <= i) pq.pop();

        // 2) 현재 살아있는 "증설 서버" 수
        int cur = (int)pq.size();

        // 3) 이번 시간에 필요한 "증설 서버" 수 (핵심!)
        int need = players[i] / m;

        // 4) 부족하면 추가
        if (need > cur) {
            int add = need - cur;
            answer += add;
            for (int t = 0; t < add; t++) pq.push(i + k);
        }
    }
    return answer;
}
