#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int N, M, V, x, y;
int board[1001][1001];
bool visited[1001];
queue<int> q;

void dfs(int v)
{
    visited[v] = 1;
    cout << v << " ";

    for(int i = 1; i <= N; i++)
    {
        if(board[v][i] == 1 && !visited[i])
            dfs(i);
    }
}

void bfs(int v)
{
    q.push(v);
    visited[v] = 1;
    cout << v << " ";

    while(!q.empty())
    {
        v = q.front();
        q.pop();

        for(int i = 1; i <= N; i++)
        {
            if(board[v][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = 1;
                cout << i << " ";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M >> V;

    for(int i = 0; i < M; i++)
    {
        cin >> x >> y;
        board[x][y] = 1;
        board[y][x] = 1;
    }

    dfs(V);
    cout << '\n';

    memset(visited, 0, sizeof(visited));
    bfs(V);

    return 0;
}