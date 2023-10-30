#include <iostream>
#include <cmath>
using namespace std;

int A, P, answer = 0;
int check[300000];

void dfs(int n)
{
    int next = 0;
    check[n]++;

    if(check[n] == 3)
        return;
    while(n != 0)
    {
        next += pow(n % 10, P);
        n /= 10;
    }
    dfs(next);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> P;

    dfs(A);

    for(int i = 0; i < 300000; i++)
        if(check[i] == 1)
            answer++;

    cout << answer << '\n';
    return 0;
}