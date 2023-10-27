#include <iostream>
#include <stack>
#include <string>
using namespace std;

string str;
stack<char> s;

int main()
{ 
    getline(cin, str);

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '<')
        {
            while(!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            while (true)
            {
                cout << str[i];
                if(str[i] == '>')
                    break;
                i++;
            }
        }
        else if(str[i] == ' ')
        {
           while(!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            cout << ' ';
        }
        else
            s.push(str[i]);
    }

    while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

    return 0;
}