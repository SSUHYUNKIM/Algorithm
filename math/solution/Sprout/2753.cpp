#include <iostream>
using namespace std;

int year;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> year;

    if(year % 4 == 0)
    {
        if(year % 100 == 0 && year % 400 != 0)
            cout << 0 << '\n';
         else
            cout << 1 << '\n';
    }
    else
        cout << 0 << '\n';

    return 0;
}