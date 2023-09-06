#include <iostream>
using namespace std;

int N, X, input;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> N >> X;

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(input < X)
            cout << input << " ";
    }

    return 0;
}