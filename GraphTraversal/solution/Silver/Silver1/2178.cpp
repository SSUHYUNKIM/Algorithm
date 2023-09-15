#include <iostream>
#include <queue>
using namespace std;

int N, M;
string board[101];
int dist[101][101];
queue<pair<int, int>> q;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y)
{
    q.push(make_pair(x, y));
    dist[x][y] = 1;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) 
                continue;
            if(dist[nx][ny] != 0 || board[nx][ny] != '1') 
                continue;
            q.push(make_pair(nx, ny));
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++)
        cin >> board[i];

    bfs(0, 0);

    cout << dist[N - 1][M - 1] << '\n';  

    return 0;
}
