#include <iostream>
#include <queue>
using namespace std;

int N, M, u, v, answer = 0;
int board[1001][1001];
bool visited[1001];
queue<int> q;

void bfs(int n)
{
    visited[n] = 1;
    q.push(n);

    while(!q.empty())
    {
        n = q.front();
        q.pop();

        for(int i = 1; i <= N; i++)
        {
            if(board[n][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < M; i++)
    {
        cin >> u >> v;
        board[u][v] = 1;
        board[v][u] = 1;
    }

    for(int i = 1; i <= N; i++)
    {
        if(!visited[i])
        {
            bfs(i);
            answer++;
        }
    }

    cout << answer << '\n';
    return 0;
}