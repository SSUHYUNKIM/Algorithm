#include <iostream>
#include <algorithm>

using namespace std;

int input;
int arr[9];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for(int i = 0; i < 9; i++)
        cin >> arr[i];

    cout << *max_element(arr, arr + 9) << '\n';
    cout << max_element(arr, arr + 9) - arr + 1 << '\n';

    return 0;
}