#include <iostream>
#include <stack>
using namespace std;

int K, input, answer = 0;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> K;

    for(int i = 0; i < K; i++)
    {
        cin >> input;
        if(input == 0)
            s.pop();
        else
            s.push(input);
    }

    while(!s.empty())
    {
        answer += s.top();
        s.pop();
    }

    cout << answer << '\n';
    return 0;
}