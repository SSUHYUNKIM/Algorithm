#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(cin >> a >> b >> c)
    {
        if(a == 0 && b == 0 && c == 0)
            break;
        if(a >= b + c || b >= a + c || c >= a + b)
            cout << "Invalid" << '\n';
        else
        {
            if(a == 0 && b == 0 && c == 0)
                break;
            if(a == b && b == c)
                cout << "Equilateral" << '\n';
            else if(a == b || a == c || b == c)
                cout << "Isosceles" << '\n';
            else
                cout << "Scalene" << '\n';
        }
    }
    return 0;
}