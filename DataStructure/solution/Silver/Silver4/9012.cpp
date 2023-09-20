#include <iostream>
#include <stack>
using namespace std;

int T;
string input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        stack<char> s;
        cin >> input;

       for(auto in : input)
        {
            if(s.empty() || in == '(')
                s.push(in);
            else if(s.top() == '(')
                s.pop();
        }
        if(s.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}