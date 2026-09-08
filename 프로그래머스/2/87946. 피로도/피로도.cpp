#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
vector<bool> visited;

void dfs(int k, vector<vector<int>>& dungeons, int count) {
    answer = max(answer, count);

    for (int i = 0; i < dungeons.size(); i++) {
        int need = dungeons[i][0];
        int cost = dungeons[i][1];

        if (!visited[i] && k >= need) {
            visited[i] = true;

            dfs(k - cost, dungeons, count + 1);

            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    visited = vector<bool>(dungeons.size(), false);

    dfs(k, dungeons, 0);

    return answer;
}
