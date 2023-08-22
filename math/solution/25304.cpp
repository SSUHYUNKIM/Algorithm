#include <iostream>

using namespace std;

int X, N, a, b, price = 0;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> X >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        price += a * b;
    }
    if(X == price)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}
