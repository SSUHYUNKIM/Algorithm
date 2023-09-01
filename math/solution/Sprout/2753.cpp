#include <iostream>

using namespace std;

int year;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
