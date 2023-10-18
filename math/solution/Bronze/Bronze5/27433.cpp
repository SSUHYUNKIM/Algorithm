#include <iostream>
using namespace std;

long long N;

long long factorial(long long n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    cout << factorial(N) << '\n';
}