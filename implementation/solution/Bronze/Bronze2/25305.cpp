#include <iostream>
#include <algorithm>
using namespace std;

int N, k;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> k;

    int arr[N];

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    cout << arr[N - k] << '\n';
    return 0;
}