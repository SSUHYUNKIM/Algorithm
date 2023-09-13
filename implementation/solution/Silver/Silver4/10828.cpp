#include <iostream>
#include <stack>
using namespace std;

int N, num;
string input;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(input == "push")
        {
            cin >> num;
            s.push(num);
        }
        else if(input == "pop")
        {   
            if(!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if(input == "size")
            cout << s.size()<< '\n';
        else if(input == "empty")
            cout << s.empty() << '\n';
        else if(input == "top")
        {
            if(!s.empty())
                cout << s.top() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}