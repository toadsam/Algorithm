#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// node에서 시작해서 연결된 송전탑 개수를 세는 함수
int countTower(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;

    int count = 1; // 현재 node도 송전탑 1개니까 1부터 시작

    for (int next : graph[node]) {
        if (!visited[next]) {
            count += countTower(next, graph, visited);
        }
    }

    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = n;

    // 전선을 하나씩 끊어보기
    for (int i = 0; i < wires.size(); i++) {
        vector<vector<int>> graph(n + 1);

        // i번째 전선을 제외하고 그래프 만들기
        for (int j = 0; j < wires.size(); j++) {
            if (i == j) continue; // 이 전선은 끊은 거라서 넣지 않음

            int a = wires[j][0];
            int b = wires[j][1];

            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        vector<bool> visited(n + 1, false);

        int count = countTower(1, graph, visited);

        int other = n - count;
        int diff = abs(count - other);

        answer = min(answer, diff);
    }

    return answer;
}
