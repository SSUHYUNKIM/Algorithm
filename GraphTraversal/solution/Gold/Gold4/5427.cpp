#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int T, w, h;

char board[1001][1001];
int sang[1001][1001];
int fire[1001][1001];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    while(T--)
    {
        queue<pair<int, int>> qF;
        queue<pair<int, int>> qS;
        bool escape = false;
    
        memset(fire, -1, sizeof(fire));
        memset(sang, -1, sizeof(sang));

        cin >> w >> h;
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                cin >> board[i][j];

                if(board[i][j] == '*')
                {
                    qF.push(make_pair(i, j));
                    fire[i][j] = 0;
                }
                if(board[i][j] == '@')
                {
                    qS.push(make_pair(i, j));
                    sang[i][j] = 0;
                }
            }
        }

        while(!qF.empty())
        {
            auto cur = qF.front();
            qF.pop();

            for(int dir = 0; dir < 4; dir++)
            {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if(nx < 0 || nx >= h || ny < 0 || ny >= w)
                    continue;
                if(fire[nx][ny] >= 0 || board[nx][ny] == '#')
                    continue;
                fire[nx][ny] = fire[cur.first][cur.second] + 1;
                qF.push(make_pair(nx, ny));
            }
        }

        while(!qS.empty() && !escape)
        {
            auto cur = qS.front();
            qS.pop();

            for(int dir = 0; dir < 4; dir++)
            {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if(nx < 0 || nx >= h || ny < 0 || ny >= w)
                {
                    cout << sang[cur.first][cur.second] + 1 << '\n';
                    escape = true;
                    break;
                }
                if(sang[nx][ny] >= 0 || board[nx][ny] == '#')
                    continue;
                if(fire[nx][ny] != -1 && fire[nx][ny] <= sang[cur.first][cur.second] + 1)
                    continue;
                sang[nx][ny] = sang[cur.first][cur.second] + 1;
                qS.push(make_pair(nx, ny));
            }
        }

        if(!escape)
            cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
}