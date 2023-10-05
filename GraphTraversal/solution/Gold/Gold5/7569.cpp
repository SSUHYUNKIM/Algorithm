#include <iostream>
#include <queue>
using namespace std;

int M, N, H, answer = 0;
int board[101][101][101];
int dist[101][101][101];

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<pair<pair<int,int>,int>> q;

void bfs()
{
    while(!q.empty())
    {
		int x = q.front().first.first;
		int y = q.front().first.second;
		int z = q.front().second;
		q.pop();
        for(int dir = 0; dir < 6; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            int nz = z + dz[dir];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H)
                continue;
            if(dist[nx][ny][nz] >= 0)
                continue;
            dist[nx][ny][nz] = dist[x][y][z] + 1;
            q.push(make_pair(make_pair(nx,ny),nz));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> M >> N >> H;

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < M; k++)
            {
                cin >> board[j][k][i];
                if(board[j][k][i] == 1)
                    q.push(make_pair(make_pair(j,k),i));
                if(board[j][k][i] == 0)
                    dist[j][k][i] = -1;
            }
        }
    }

    bfs();

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < M; k++)
            {
                if(dist[j][k][i] == -1)
                {
                    cout << -1 << '\n';
                    return 0;
                }
                answer = max(answer, dist[j][k][i]);
            }
        }
    }
    cout << answer << '\n';
    return 0;
}