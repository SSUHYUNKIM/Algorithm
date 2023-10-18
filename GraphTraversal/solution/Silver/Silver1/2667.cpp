#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, num;
string board[26];
bool visited[26][26];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<int> house;
queue<pair<int, int>> q;

void bfs(int x, int y)
{
    num = 0;
    q.push(make_pair(x, y));
    visited[x][y] = 1;
    num++;

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
            if(board[nx][ny] == '0' || visited[nx][ny])
                continue;
            q.push(make_pair(nx, ny));
            visited[nx][ny] = 1;
            num++;
        }
    }
    house.push_back(num);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> board[i];
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j] == '1' && visited[i][j] == false)
                bfs(i, j);

        }
    }

    sort(house.begin(), house.end());

    cout << house.size() << '\n';
    for(auto h : house)
        cout << h << '\n';

    return 0;
}