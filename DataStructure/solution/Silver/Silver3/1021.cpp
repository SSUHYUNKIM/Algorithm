#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int N, M, A, answer = 0;
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    for(int i = 1; i <= N; i++)
        dq.push_back(i);
    
    for(int i = 0; i < M; i++)
    {
        cin >> A;

        int idx = find(dq.begin(), dq.end(), A) - dq.begin();

        while(dq.front() != A)
        {
            if(idx < dq.size() - idx)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            answer++;
        }
        dq.pop_front();
    }

    cout << answer << '\n';

    return 0;
}