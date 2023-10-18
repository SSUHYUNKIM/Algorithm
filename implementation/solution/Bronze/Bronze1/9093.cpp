#include <iostream>
#include<string>
#include <stack>
using namespace std;

int T;
string str;
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++)
    {
        getline(cin, str);
        str += " ";
        for(int j = 0; j < str.size(); j++)
        {
            if(str[j] == ' ')
            {
                while(!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << " ";
            }
            else
                s.push(str[j]);
        }
        cout << "\n";
    }
    return 0;
}