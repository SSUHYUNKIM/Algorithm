#include <iostream>
#include <deque>
using namespace std;

int N, input, M;
bool flag[100001];
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> flag[i];

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(flag[i] == 0)
            dq.push_back(input);
    }

    cin >> M;

    for(int i = 0; i < M; i++)
    {
        cin >> input;
        dq.push_front(input);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}