#include <iostream>
#include <queue>
using namespace std;

int N;
int board[4][4] = {0, };
bool visited[4][4] = {0, };
int dx[2] = {0, 1};
int dy[4] = {1, 0};
queue<pair<int, int>> q;

bool bfs(int x, int y)
{
    visited[x][y] = 1;
    q.push(make_pair(x, y));

    while(!q.empty()) 
    {
        auto cur = q.front();
        q.pop();

        if(board[cur.first][cur.second] == -1)
			return true;

        for(int i = 0; i < 2; i++)
        {
            int nx = cur.first + dx[i] * board[cur.first][cur.second];
            int ny = cur.second + dy[i] * board[cur.first][cur.second];

            if(nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny])
                continue;

            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
        }
    }

    return false;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            cin >> board[i][j];
    }

    if(bfs(0, 0))
        cout << "HaruHaru" << '\n';
    else
        cout << "Hing" << '\n';

    return 0;
}