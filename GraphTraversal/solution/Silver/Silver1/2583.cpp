#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int M, N, K, lX, lY, rX, rY, answer = 0;
int board[101][101];
int visited[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

queue<pair<int, int>> q;
vector<int> area;

void bfs(int x, int y)
{
    visited[x][y] = 1;
    q.push(make_pair(x, y));

    int width = 1;
    answer++;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= M || ny < 0 || ny >= N)
                continue;
            if(visited[nx][ny] || board[nx][ny] == 1)
                continue;
            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
            width++;
        }
    }
    area.push_back(width);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> M >> N >> K;

    while(K--)
    {
        cin >> lX >> lY >> rX >> rY;

        for(int i = lY; i < rY; i++)
        {
            for(int j = lX; j < rX; j++)
                board[i][j] = 1;
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j] == 1 || visited[i][j] == 1)
                continue;
            bfs(i, j);
        }
    }

    sort(area.begin(), area.end());

    cout << answer << '\n';
    for(auto a : area)
        cout << a << " ";

    return 0;
}