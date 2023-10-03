#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int N, answer1, answer2;
char board[101][101];
bool visited[101][101];
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

            if(nx < 0 || nx >= N || ny < 0 || ny >= N)
                continue;
            if(visited[nx][ny] == 1 || board[x][y] != board[nx][ny])
                continue;
            visited[nx][ny] = 1;
            q.push(make_pair(nx, ny));
        }
    }
}

int check()
{
    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(!visited[i][j])
            {
                cnt++;
                bfs(i, j);
            }
        }
    }
    return cnt;
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

    answer1 = check();
    memset(visited, 0, sizeof(visited));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j] == 'G')
                board[i][j] = 'R';
        }
    }

    answer2 = check();
    cout << answer1 << " " << answer2 << '\n';
    return 0;
}