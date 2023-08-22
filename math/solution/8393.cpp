#include <iostream>

using namespace std;

int n, result = 0;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        result += i;
    }
    cout << result << '\n';
    return 0;
}
