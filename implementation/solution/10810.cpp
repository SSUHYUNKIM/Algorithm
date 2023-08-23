#include <iostream>

using namespace std;

int N, M, i, j, k;
int basket[101] = {0, };

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    for(int l = 0; l < M; l++)
    {
        cin >> i >> j >> k;
        for(int o = i; o <= j; o++)
        {
            basket[o] = k;
        }
    }

    for(int l = 1; l <= N; l++)
    {
        cout << basket[l] << " ";
    }

    return 0;
}