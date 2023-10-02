#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int T, M, N, K, X, Y, answer;
bool visited[51][51];
int board[51][51];
queue<pair<int, int>> q;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y)
{
    visited[x][y] = 1;
    q.push(make_pair(x, y));

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
            if(visited[nx][ny] || board[nx][ny] != 1)
                continue;
            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        answer = 0;
        cin >> M >> N >> K;

        memset(board, 0, sizeof(board));
        memset(visited, 0, sizeof(visited));

        for(int j = 0; j < K; j++)
        {
            cin >> X >> Y;
            board[Y][X] = 1;
        }
        
        for(int x = 0; x < N; x++)
        {
            for(int y = 0; y < M; y++)
            {
                if(board[x][y] == 1 && !visited[x][y])
                {
                    bfs(x, y);
                    answer++;
                }
            }
        }

        cout << answer << '\n';
    }
    return 0;
}