#include <iostream>
using namespace std;

long long A, B;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> A >> B;

    if (A > B) 
        swap(A, B);

    if(A == B || B - A == 1)
        cout << 0;
    else
    {
        cout << B - A - 1 << '\n';
        for(long long i = A + 1; i < B; i++)
            cout << i << " ";
    }
    
    return 0;
}