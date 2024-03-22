#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int N, A[100], operators[4], result_min = INT_MAX, result_max = INT_MIN;

void dfs(int idx, int result) 
{
    if(idx == N - 1)
    {
        result_min = min(result, result_min);
        result_max = max(result, result_max);
    }

    for(int i = 0; i < 4; i++)
    {
        if(operators[i] > 0)
        {
            operators[i]--;
            if(i == 0)
                dfs(idx + 1, result + A[idx + 1]);
            else if(i == 1)
                dfs(idx + 1, result - A[idx + 1]);
            else if(i == 2)
                dfs(idx + 1, result * A[idx + 1]);
            else
                dfs(idx + 1, result / A[idx + 1]);
            operators[i]++;
        }
    }
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> A[i];

    for(int i = 0; i < 4; i++)
        cin >> operators[i];

    dfs(0, A[0]);

    cout << result_max << '\n';
    cout << result_min << '\n';

    return 0;
}