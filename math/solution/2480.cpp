#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> C;

    if(A == B && B == C)
        cout << 10000 + A * 1000;
    else if(A == B || A == C)
        cout << 1000 + A * 100;
    else if(B == C)
        cout << 1000 + B * 100;
    else
        cout << max(A, max(B, C)) * 100;
    return 0;
}
