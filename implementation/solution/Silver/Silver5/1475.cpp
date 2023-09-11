#include <iostream>
using namespace std;

int N, answer = 0;
int arr[10] = {};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N;

    while(N > 0)
    {
        arr[N % 10]++;
        N /= 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(i == 6 || i == 9)
            continue;
        answer = max(answer, arr[i]);
    }

    answer = max(answer, (arr[6] + arr[9] + 1) / 2);
    cout << answer << '\n';
    
    return 0;
}
