#include <iostream>

using namespace std;

int input, result = 0;
bool check[42];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 10; i++)
    {
        cin >> input;
        check[input % 42] = true;
    }

    for(int i = 0 ; i < 42; i++)
    {
        if(check[i])
            result++;
    }

    cout << result << '\n';
    return 0;
}