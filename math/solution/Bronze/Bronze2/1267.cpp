#include <iostream>
using namespace std;

int N, time, M = 0, Y = 0;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> time;
        Y += ((time / 30) + 1) * 10;
        M += ((time / 60) + 1) * 15;
    }

    if(M < Y)
        cout << "M " << M << '\n';
    else if(M > Y)
        cout << "Y " << Y << '\n';
    else
        cout << "Y M " << Y << '\n';

    return 0;
}