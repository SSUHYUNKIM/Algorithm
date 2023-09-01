#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, B;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> B;

    while(N > 0)
    {
        v.push_back(N % B);
        N = N / B;
    }

    for(int i = v.size() - 1; i >= 0; i--)
    {
        if(v[i] >= 10)
            cout << (char)(v[i] + 55);
        else
            cout << v[i];
    }

    return 0;
}