#include <iostream>
#include <queue>
using namespace std;

int N, K;
int dist[100001];
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;
    
    fill(dist, dist + 100001, -1);

    dist[N] = 0;
    q.push(N);

    while(dist[K] == -1)
    {
        int cur = q.front();
        q.pop();
        if(cur - 1 >= 0 && dist[cur - 1] < 0)
        {
            dist[cur - 1] = dist[cur] + 1;
            q.push(cur - 1);
        }
        if(cur + 1 <= 100000 && dist[cur + 1] < 0)
        {
            dist[cur + 1] = dist[cur] + 1;
            q.push(cur + 1);
        }
        if(2 * cur <= 100000 && dist[2 * cur] < 0)
        {
            dist[2 * cur] = dist[cur] + 1;
            q.push(2 * cur);
        }
    }
    cout << dist[K] << '\n';
    return 0;
}