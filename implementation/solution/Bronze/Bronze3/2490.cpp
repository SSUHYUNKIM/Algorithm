#include <iostream>
using namespace std;

int input, answer;
string result = "DCBAE";

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for(int i = 0; i < 3; i++)
    {
        answer = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> input;
            answer += input;
        }
        cout << result[answer] << '\n';
    }

    return 0;
}
