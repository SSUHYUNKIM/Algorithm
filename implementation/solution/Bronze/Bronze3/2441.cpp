#include <iostream>
using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
            cout << " ";
        for(int j = 0; j < N - i; j++)
            cout << "*";
        cout << '\n';
    }
    
    return 0;
}
