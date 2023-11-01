#include <iostream>
#include <stack>
using namespace std;

int N, num, order = 1;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    
    while(N--)
    {
        cin >> num;

        if(order == num)
            order++;
        else
            s.push(num);
        
        while(!s.empty() && s.top() == order)
        {
            s.pop();
            order++;
        }
    }

    if(s.empty())
        cout << "Nice" << '\n';
    else
        cout << "Sad" << '\n';
    return 0;
}