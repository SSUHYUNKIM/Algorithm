#include <iostream>
#include <vector>
using namespace std;

int N, S, num, answer = 0;
vector<int> v;

void dfs(int idx, int x)
{
    if(idx == N)
        return;
    if(x + v[idx] == S)
        answer++;
    dfs(idx + 1, x);
    dfs(idx + 1, x + v[idx]);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> S;

    for(int i = 0 ; i < N; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    dfs(0, 0);

    cout << answer << '\n';
    return 0;
}