#include <iostream>
#include <queue>
using namespace std;

int n, m, cnt = 0, mx = 0;
queue<pair<int, int>> q;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int board[502][502];
bool visited[502][502];

void bfs(int x, int y)
{
    visited[x][y] = 1;
    q.push(make_pair(x, y));

    int area = 0;

    while(!q.empty())
    {
        area++;
        pair<int, int> cur = q.front();
        q.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if(visited[nx][ny] || board[nx][ny] != 1)
                continue;
            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
        }
    }
    mx = max(mx, area);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> board[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(board[i][j] == 1 && !visited[i][j])
            {
                cnt++;
                bfs(i, j);
            }
        }
    }

    cout << cnt << '\n';
    cout << mx << '\n';
    return 0;
}