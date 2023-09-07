#include <iostream>
using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j < i; j++)
            cout << " ";
        for(int j = 2 * (N - i) + 1; j > 0; j--)
            cout << "*";
        cout << '\n';
    }

    for(int i = 1; i < N; i++)
    {
        for(int j = N - i - 1; j > 0; j--)
            cout << " ";
        for(int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << '\n';
    }

    return 0;
}
