#include <iostream>
#include <stack>
using namespace std;

long long answer = 0;
string input;
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == '(')
            s.push(input[i]);
        else if(input[i - 1] == '(')
        {
            s.pop();
            answer += s.size();
        }
        else
        {
            answer++;
            s.pop();
        }
    }

    cout << answer << '\n';
    return 0;
}