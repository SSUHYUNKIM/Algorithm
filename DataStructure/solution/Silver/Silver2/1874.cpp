#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n, num, cur = 1;
stack<int> s;
vector<char> answer;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        while(cur <= num)
        {
            answer.push_back('+');
            s.push(cur);
            cur++;
        }

        if(num == s.top())
        {
            answer.push_back('-');
            s.pop();
        }
        else
        {
            cout << "NO" <<'\n';
            return 0;
        }
    }

    for(auto ans : answer)
        cout << ans << '\n';

    return 0;
}