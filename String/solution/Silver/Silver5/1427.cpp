#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    while(N > 0)
    {
        v.push_back(N % 10);
        N /= 10;
    }

    sort(v.begin(), v.end(), greater<>());

    for(auto vv : v)
    {
        cout << vv;
    }

    return 0;
}