#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    vector<int> v(N);

    for(int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    cin >> M;

    for(int i = 0; i < M; i++)
    {
        cin >> input;

        if(binary_search(v.begin(), v.end(), input))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}