#include <iostream>
#include <queue>

using namespace std;

#define MAX 1001

typedef struct node 
{
	int x;
	int y;
	int depth;
	int flag;
};

int map[MAX][MAX];
bool visited[MAX][MAX][2] = {false, };
int N, M;
queue<node> q;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int bfs()
{
    visited[0][0][0] = true;
    q.push({0, 0, 1, false});
    
    while(!q.empty())
    {
        node cur = q.front();
        q.pop();

        if (cur.x == M - 1 && cur.y == N - 1) 
			return cur.depth;

        for (int i = 0; i < 4; i++) 
        {
			int tx = cur.x + dx[i];
			int ty = cur.y + dy[i];

			if (tx < 0 || tx >= M || ty < 0 || ty >= N)
				continue;

			if (map[ty][tx] == 1 && cur.flag == 0) 
            {
				visited[ty][tx][cur.flag + 1] = true;
				q.push({tx, ty, cur.depth + 1, cur.flag + 1 });
			}
			else if (map[ty][tx] == 0 && !visited[ty][tx][cur.flag]) 
            {
				visited[ty][tx][cur.flag] = true;
				q.push({tx, ty, cur.depth + 1, cur.flag });
			}
		}
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++) 
    {
		string temp;
		cin >> temp;
		for (int j = 0; j < M; j++) 
			map[i][j] = temp[j] - '0';
	}

    cout << bfs() << '\n';
    return 0;
}