#include <iostream>
#include <stack>
using namespace std;

int N;
stack<int> s;
int num[1000001];
int answer[1000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> num[i];

    for (int i = N - 1; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= num[i])
                s.pop();
        
        if(s.empty())
            answer[i] = -1;
        else
            answer[i] = s.top();

        s.push(num[i]);
    }

    for(int i = 0; i < N; i++)
        cout << answer[i] << " ";

    return 0;
}