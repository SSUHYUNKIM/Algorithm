#include <iostream>
using namespace std;

int N, score;

int stair[305];
int dp[305];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 1; i <= N; i++)
        cin >> stair[i];

    dp[1] = stair[1];
    if(N > 1) dp[2] = stair[2] + stair[1];
    if(N > 2) dp[3] = stair[3] + max(stair[1], stair[2]);
    for(int i = 4; i <= N; i++)
        dp[i] = stair[i] + max(stair[i - 1] + dp[i - 3], dp[i - 2]);

    cout << dp[N];

    return 0;
}