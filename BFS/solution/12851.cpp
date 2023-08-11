#include <iostream>
#include <queue>
using namespace std;

#define MAX 100001

queue<pair<int, int>> q;
bool visited[MAX] = {false, };
int N, K, cnt = 0 , t = 0;

int bfs(int n, int k)
{
    q.push(make_pair(n, 0));
    visited[n] = true;
    
    while(!q.empty())
    {
        int loc = q.front().first;
        int time = q.front().second;
        q.pop();
        visited[loc] = true;

        if(cnt && loc == k && time == t)
            cnt++;
        if(!cnt && loc == k)
        {
            t = time;
            cnt++;
        }
        if(loc + 1 < MAX && visited[loc + 1] == false)
        {
            q.push(make_pair(loc + 1, time + 1));
        }
        if(loc - 1 >= 0 && visited[loc - 1] == false)
        {
            q.push(make_pair(loc - 1, time + 1));
        }
        if(loc * 2 < MAX && visited[loc * 2] == false)
        {
            q.push(make_pair(loc * 2, time + 1));
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;

    bfs(N, K);
    cout << t << '\n' << cnt;
    return 0;
}