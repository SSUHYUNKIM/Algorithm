#include <iostream>
#include <algorithm>
using namespace std;

int a, b;
int card[21];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for(int i = 1; i < 21; i++)
        card[i] = i;

    for(int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        reverse(card + a, card + b + 1);
    }

    for(int i = 1; i < 21; i++)
        cout << card[i] << " ";

    return 0;
}