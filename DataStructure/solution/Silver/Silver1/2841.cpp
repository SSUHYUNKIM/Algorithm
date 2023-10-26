#include <iostream>
#include <stack>
using namespace std;

int N, P, line, fret, answer = 0;;
stack<int> s[7];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> P;

    for(int i = 0; i < N; i++)
    {
        cin >> line >> fret;
        if(s[line].empty())
        {
            s[line].push(fret);
            answer++;
        }
        else
        {
            if(s[line].top() < fret)
            {
                s[line].push(fret);
                answer++;
            }
            else
            {
                while(!s[line].empty() && s[line].top() > fret)
                {
                    s[line].pop();
                    answer++;
                }
                if(!s[line].empty() && s[line].top() == fret)
                        continue;
                    s[line].push(fret);
                    answer++;
            }
        }
    }

    cout << answer << '\n';
    return 0;
}