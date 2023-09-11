#include <iostream>
#include <stack>
#include <string>
using namespace std;

string str;
char input1, input2;
int M, cursor;

stack<char> l;
stack<char> r;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str >> M;

    for(int i = 0; i < (int)str.size(); i++)
        l.push(str[i]);

    for(int i = 0; i < M; i++)
    {
        cin >> input1;
        
        if(input1 == 'L')
        {
            if(!l.empty())
            {
                r.push(l.top());
                l.pop();
            }
        }
        else if(input1 == 'D')
        {
            if(!r.empty())
            {
                l.push(r.top());
                r.pop();
            }
        }
        else if(input1 == 'B')
        {
            if(!l.empty())
                l.pop();
        }
        else if(input1 == 'P')
        {
            cin >> input2;
            l.push(input2);
        }
    }

    while(!l.empty())
    {
        r.push(l.top());
        l.pop();
    }

    while(!r.empty())
    {
        cout << r.top();
        r.pop();
    }
    return 0;
}