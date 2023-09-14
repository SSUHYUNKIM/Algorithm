#include <iostream>
#include <stack>
using namespace std;

int N, tower;
long long answer;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> tower;

        while(!s.empty() && s.top() <= tower)
            s.pop();
        
        answer += s.size();
        s.push(tower);
    }

    cout << answer << '\n';

    return 0;
}