#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int T, N, num;
vector<int> v[1001];
bool visited[1001];

void dfs(int node)
{
    visited[node] = true;
    for(int i = 0; i < v[node].size(); i++)
    {
        int next = v[node][i];
        if(!visited[next])
            dfs(next);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int cnt = 0;

        memset(visited, false, sizeof(visited));

        cin >> N;

        for(int j = 1; j <= N; j++)
        {
            v[j].clear();
            cin >> num;
            v[j].push_back(num);
        }

        for(int j = 1; j <= N; j++)
        {
            if(!visited[j])
            {
                dfs(j);
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}