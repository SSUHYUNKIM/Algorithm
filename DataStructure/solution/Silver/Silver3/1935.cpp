#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int N;
stack<double> s;
vector<int> v(26);
string str;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> str;

    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            s.push(v[str[i] - 'A']);

        else
        {
            if (!s.empty())
            {
                double temp = s.top();
                s.pop();

                switch (str[i])
                {
                    case '+':
                        temp = s.top() + temp;
                        break;
                    case '-':
                        temp = s.top() - temp;
                        break;
                    case '*':
                        temp = s.top() * temp;
                        break;
                    case '/':
                        temp = s.top() / temp;
                        break;
                }

                s.pop();
                s.push(temp);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << s.top() << '\n';

    return 0;
}