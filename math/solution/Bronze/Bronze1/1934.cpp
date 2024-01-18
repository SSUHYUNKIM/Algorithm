#include <iostream>
using namespace std;

int T, A, B;

int gcd(int a, int b)
{
    if (b == 0) 
        return a;
	else 
        return gcd(b, a % b);  
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << A * B / gcd(A, B) << '\n';
    }
 
    return 0;
}