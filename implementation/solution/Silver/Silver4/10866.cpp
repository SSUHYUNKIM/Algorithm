#include <iostream>
#include <deque>
using namespace std;

int N, X;
string input;
deque<int> dq;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> input;

        if(input == "push_front")
        {
            cin >> X;
            dq.push_front(X);
        }
        else if(input == "push_back")
        {
            cin >> X;
            dq.push_back(X);
        }
        else if(input == "pop_front")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(input == "pop_back")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(input == "size")
            cout << dq.size() << '\n';
        else if(input == "empty")
            cout << dq.empty() << '\n';
        else if(input == "front")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }
        else if(input == "back")
        {
            if(dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }
    
    return 0;
}