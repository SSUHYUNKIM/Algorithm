#include <iostream>

using namespace std;

int T;
string input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> input;
        cout << input.front() << input.back() << '\n';
    }
    return 0;
}