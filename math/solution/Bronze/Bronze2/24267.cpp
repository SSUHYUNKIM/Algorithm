#include <iostream>
using namespace std;

long long n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    cout << (n -1) * (n - 2) * n / 6 << '\n';
    cout << 3 << '\n';
 
    return 0;
}