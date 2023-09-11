#include <iostream>
using namespace std;

int n, x, answer = 0;
int arr[1000000];
bool check[2000000] = {};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        check[arr[i]] = true;
    }

    cin >> x;

    for(int i = 0; i < n; i++)
    {
        if(x - arr[i] > 0 && check[x - arr[i]] && x - arr[i] > arr[i])
            answer++;
    }

    cout << answer << '\n';

    return 0;
}