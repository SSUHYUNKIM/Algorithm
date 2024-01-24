#include <iostream>
using namespace std;

int N, answer = 1;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++)
        answer *= 2;
    cout << answer << '\n';
    return 0;
}