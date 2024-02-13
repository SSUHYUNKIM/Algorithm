#include <iostream>
using namespace std;

long long A, B;

int gcd(int a, int b)
{
    if (b == 0)
		return a;

	return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B;

    cout << A * B / gcd(A, B) << '\n';
    return 0;
}