#include <iostream>
#include <algorithm>

using namespace std;

int num[3];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num + 3);
    if(num[2] >= num[0] + num[1])
        cout << (num[0] + num[1]) * 2 - 1 << '\n';
    else
        cout << num[0] + num[1] + num[2] << '\n';
    return 0;
}