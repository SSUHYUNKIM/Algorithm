#include <iostream>
#include <stack>
using namespace std;

int N, command, X;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> command;
        if(command == 1)
        {
            cin >> X;
            s.push(X);
        }
        else if(command == 2)
        {
            if(s.empty())
                cout << -1 << '\n';
            else    
            {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if(command == 3)
            cout << s.size() << '\n';
        else if(command == 4)
            cout << s.empty() << '\n';
        else
        {
            if(s.empty())   
                cout << -1 << '\n'; 
            else
                cout << s.top() << '\n';
        }
    }
    return 0;
}