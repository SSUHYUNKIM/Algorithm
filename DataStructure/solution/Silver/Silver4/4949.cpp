#include <iostream>
#include <stack>
#include <string>
using namespace std;

string input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while(true)
    {
        getline(cin, input);
        if(input == ".")
            break;

        stack<char> s;
        bool isValid = true;

        for(auto in : input)
        {
            if(in == '[' || in == '(')
                s.push(in);
            else if(in == ']')
            {
                if(s.empty() || s.top() != '[')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if(in == ')')
            {
                if(s.empty() || s.top() != '(')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty())
            isValid = false;
        if(isValid)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}