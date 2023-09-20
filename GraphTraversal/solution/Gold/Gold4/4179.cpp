#include <iostream>
#include <queue>
using namespace std;

int R, C;
queue<pair<int, int>> q1;
queue<pair<int, int>> q2;

string board[1001];
int fire[1001][1001];
int jihoon[1001][1001];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> R >> C;

    for(int i = 0; i < R; i++)
    {
        fill(fire[i], fire[i] + C, -1);
        fill(jihoon[i], jihoon[i] + C, -1);    
    }

    for(int i = 0; i < R; i++)
        cin >> board[i];

    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(board[i][j] == 'F')
            {
                q1.push(make_pair(i, j));
                fire[i][j] = 0;
            }
            if(board[i][j] == 'J')
            {
                q2.push(make_pair(i, j));
                jihoon[i][j] = 0;
            }
        }
    }

    while(!q1.empty())
    {
        auto cur = q1.front();
        q1.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= R || ny < 0 || ny >= C)
                continue;
            if(fire[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            fire[nx][ny] = fire[cur.first][cur.second] + 1;
            q1.push(make_pair(nx, ny));
        }
    }

    while(!q2.empty())
    {
        auto cur = q2.front();
        q2.pop();

        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                cout << jihoon[cur.first][cur.second] + 1 << '\n';
                return 0;
            }
            if(jihoon[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            if(fire[nx][ny] != -1 && fire[nx][ny] <= jihoon[cur.first][cur.second] + 1)
                continue;
            jihoon[nx][ny] = jihoon[cur.first][cur.second] + 1;
            q2.push(make_pair(nx, ny));
        }
    }
    
    cout << "IMPOSSIBLE" << '\n';

    return 0;
}