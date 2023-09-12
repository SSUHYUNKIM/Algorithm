#include <iostream>
using namespace std;

int A, B, C, result;
int number[10] = {};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> C;

    result = A * B * C;

    while(result > 0)
    {
        int temp = result % 10;
        number[temp]++;
        result /= 10;
    }

    for(int i = 0; i < 10; i++)
        cout << number[i] << '\n';

    return 0;
}