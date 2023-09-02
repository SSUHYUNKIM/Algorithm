#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    
    if((a + b + c) != 180)
        cout << "Error" << '\n';
    else if(a == b && b == c)
        cout << "Equilateral" << '\n';
    else if(a == b || a == c || b == c)
        cout << "Isosceles" << '\n';
    else
        cout << "Scalene" << '\n';

    return 0;
}