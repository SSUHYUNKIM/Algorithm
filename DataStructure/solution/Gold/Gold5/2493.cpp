#include <iostream>
#include <stack>
using namespace std;

int N, tower, count;
stack<pair<int, int>> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cin >> tower;
        while(!s.empty())
        {
            if(s.top().second > tower)
            {
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if(s.empty())
            cout << 0 << " ";
            
        s.push(make_pair(i, tower));
    }

    return 0;
}