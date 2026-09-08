#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int,int>> q;

    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};

    q.push({0,0});

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx > n-1 || ny < 0 || ny > m-1)
            {
                continue;
            }
            if (maps[nx][ny] !=1)
            {
                continue;
            }

            maps[nx][ny] = maps[x][y] + 1;

            q.push({nx,ny});
        }
    }

    if (maps[n-1][m-1] == 1)
    {
        return -1;
    }

    return maps[n-1][m-1];
}

//dfs로 끝까지 가는 문제인 것 같다.
// 1. 주인공의 위치가 (m,n)이 있다면 -> dfs(m+1,n)dfs(m-1,n)dfs(m,n+1)dfs(m,n-1)4개를 실행
// 2. 그 위치의 값이 0이면 return.
// 3. 그 위치의 값이 우측 하단이면 그 answer의 값이랑 지금까지의 값이랑 비교해서 작은 값을 넣어서 비교하기
//라고 생각했는데 이건 bfs로 푸는 게 더 좋다고 하네...
