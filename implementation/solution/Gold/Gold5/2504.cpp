#include <iostream>
#include <stack>
using namespace std;

int answer = 0, num = 1;
string input;
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == '(')
        {
            num *= 2;
            s.push(input[i]);
        }
        else if(input[i] == '[')
        {
            num *= 3;
            s.push(input[i]);
        }
        else if(input[i] == ')')
        {
            if(s.empty() || s.top() != '(')
            {
                cout << 0 << '\n';
                return 0;
            }
            if(input[i - 1] == '(')
                answer += num;
            s.pop();
            num /= 2;
        }
        else
        {
            if(s.empty() || s.top() != '[')
            {
                cout << 0 << '\n';
                return 0;
            }
            if(input[i - 1] == '[')
                answer += num;
            s.pop();
            num /= 3;
        }
    }

    if(s.empty())
        cout << answer << '\n';
    else 
        cout << 0 << '\n';
    return 0;
}