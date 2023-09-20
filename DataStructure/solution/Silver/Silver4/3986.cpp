#include <iostream>
#include <stack>
using namespace std;

int N, answer = 0;
string input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> input;

        stack<char> s;

        for(auto in : input)
        {
            if(s.empty() || s.top() != in)
                s.push(in);
            else
                s.pop();
        }
        if(s.empty())   
            answer++;
    }

    cout << answer <<'\n';

    return 0;
}