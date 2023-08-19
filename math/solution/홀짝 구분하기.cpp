#include <iostream>

using namespace std;

int n;

int main(void) 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;

    if(n % 2 ==0)
    {
        cout << n << " is even" << '\n';
    }
    else
    {
        cout << n << " is odd" << '\n';
    }
    return 0;
}