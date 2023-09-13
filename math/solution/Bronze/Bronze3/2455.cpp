#include <iostream>
using namespace std;

int in, out, sum = 0, answer = 0;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 4; i++)
    {
        cin >> out >> in;
        sum += in;
        sum -= out;
        if(answer < sum)
            answer = sum;
    }

    cout << answer << '\n';
    return 0;
}