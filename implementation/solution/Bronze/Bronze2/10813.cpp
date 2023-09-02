#include <iostream>

using namespace std;

int N, M, i, j, temp = 0;
int basket[101] = {0, };

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    for(int i = 1; i <= N; i++)
    {
        basket[i] = i;
    }

    for(int k = 0; k < M; k++)
    {
        cin >> i >> j;
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }

    for(int i = 1; i <= N; i++)
    {
        cout << basket[i] << " ";
    }

    return 0;
}