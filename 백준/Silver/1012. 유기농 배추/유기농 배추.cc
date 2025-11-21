#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


const int MAX = 51;
int cabbage_field[MAX][MAX]; 
int M, N, K; 


int dx[] = {0, 0, 1, -1}; 
int dy[] = {1, -1, 0, 0}; 


void DFS(int x, int y) {
    
    cabbage_field[x][y] = 0;

   
    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i]; 
        int ny = y + dy[i]; 

       
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
            continue; 
        }

        
        if (cabbage_field[nx][ny] == 1) {
           
            DFS(nx, ny);
        }
    }
}


void solve() {
    
    cin >> M >> N >> K; 
    
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cabbage_field[i][j] = 0;
        }
    }

    
    for (int i = 0; i < K; ++i) {
        int x, y; 
        cin >> y >> x; 
        cabbage_field[x][y] = 1; 
    }
    
    
    int worm_count = 0;

   
    for (int i = 0; i < N; ++i) { 
        for (int j = 0; j < M; ++j) {
            
           
            if (cabbage_field[i][j] == 1) {
                
                worm_count++;
                
               
                DFS(i, j);
            }
        }
    }
    
   
    cout << worm_count << "\n";
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin >> T;

   
    while (T--) {
        solve();
    }

    return 0;
}