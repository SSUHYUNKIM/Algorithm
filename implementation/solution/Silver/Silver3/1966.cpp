#include <iostream>
#include <queue>
using namespace std;

int T, N, M, paper;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        int cnt = 0;

        cin >> N >> M;

        for(int j = 0; j < N; j++)
        {
            cin >> paper;
            q.push(make_pair(paper, j));
            pq.push(paper);
        }
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            if(pq.top() == cur.first)
            {
                pq.pop();
                cnt++;
                if(cur.second == M)
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else
                q.push(make_pair(cur.first, cur.second));
        }
    }

    return 0;
}