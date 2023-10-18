#include <iostream>
#include <deque>
using namespace std;

int N, num;
deque<pair<int, int>> dq;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num;
        dq.push_back(make_pair(num, i + 1));
    }

    while(!dq.empty())
    {
        auto cur = dq.front();
        cout << cur.second << " ";
        dq.pop_front();

        if(cur.first > 0)
        {
            for(int i = 0; i < cur.first - 1; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else
        {
            for(int i = 0 ; i < (-1) * cur.first; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}