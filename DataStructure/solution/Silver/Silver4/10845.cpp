#include <iostream>
#include <queue>
using namespace std;

int N, X;
string input;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(input == "push")
        {
            cin >> X;
            q.push(X);
        }
        else if(input == "pop")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(input == "size")
            cout << q.size() << '\n';
        else if(input == "empty")
            cout << q.empty() << '\n';
        else if(input == "front")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if(input == "back")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }

    return 0;
}