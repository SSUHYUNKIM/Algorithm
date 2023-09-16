#include <iostream>
#include <queue>
using namespace std;

int M, N, answer = 0;
queue<pair<int, int>> q;

int board[1001][1001];
int dist[1001][1001];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs()
{
    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if(dist[nx][ny] >= 0)
                continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push(make_pair(nx, ny));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> M >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> board[i][j];
            if(board[i][j] == 1)
                q.push(make_pair(i, j));
            if(board[i][j] == 0)
                dist[i][j] = -1;
        }
    }

    bfs();

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(dist[i][j] == -1)
            {
                cout << -1 << '\n';
                return 0;
            }
            answer = max(answer, dist[i][j]);
        }
    }
    
    cout << answer << '\n';
    
    return 0;
}