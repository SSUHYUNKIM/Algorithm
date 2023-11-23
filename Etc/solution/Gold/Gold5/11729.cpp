#include <iostream>
using namespace std;

int N;

void hanoi(int n, int start, int mid, int end)
{
    if(n == 1)
        cout << start << " " << end << '\n';
    else
    {
        hanoi(n - 1, start, end, mid);
        cout << start << " " << end << '\n';
        hanoi(n - 1, mid, start, end);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    cout << (1 << N) -1 << '\n';
    hanoi(N, 1, 2, 3);
    return 0;
}