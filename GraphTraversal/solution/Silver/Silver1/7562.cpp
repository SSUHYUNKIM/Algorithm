#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int I, N, curX, curY, destX, destY;
int dist[301][301];
int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

queue<pair<int, int>> q;

void bfs(int x, int y)
{
    dist[x][y] = 0;
    q.push(make_pair(x, y));
    
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for(int dir = 0; dir < 8; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= N)
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
    
    cin >> I;

    for(int i = 0; i < I; i++)
    {
        memset(dist, -1, sizeof(dist));
        cin >> N;
        cin >> curX >> curY;
        cin >> destX >> destY;
        bfs(curX, curY);
        cout << dist[destX][destY] << '\n';
    }
    return 0;
}