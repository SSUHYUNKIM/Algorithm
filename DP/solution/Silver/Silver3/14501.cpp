#include <iostream>
using namespace std;

int N;
int dp[1001], T[1001], P[1001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> T[i] >> P[i];

    for(int i = N - 1; i >= 0; i--)
    {
        int temp = i + T[i];
        if(temp <= N)
            dp[i] = max(dp[temp] + P[i] , dp[i + 1]);
        else
            dp[i] = dp[i + 1];
    }

    cout << dp[0] << '\n';
    return 0;
}