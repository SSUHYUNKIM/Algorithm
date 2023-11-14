#include <iostream>
using namespace std;

int X;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> X;

    int temp = 1;

    while(X > temp)
    {
        X -= temp;
        temp++;
    } 

    if(temp % 2 == 0)
        cout << X << '/' << temp + 1 - X << '\n';
    else
        cout << temp + 1 - X << '/' << X << '\n';

    return 0;
}