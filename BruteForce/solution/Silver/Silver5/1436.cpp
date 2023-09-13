#include <iostream>
using namespace std;

int N, temp, count = 0, answer = 665;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    while(count != N)
    {
        answer++;
        temp = answer;
        while(temp != 0)
        {
            if(temp % 1000 == 666)
            {
                count++;
                break;
            }
            else
                temp /= 10;
        }
    }

    cout << answer << '\n';
    return 0;
}