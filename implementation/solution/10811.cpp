#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, i, j;
vector<int> basket(101);

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    
    for(int k = 1; k <= N; k++)
        basket[k] = k;
    
    for(int k = 0; k < M; k++)
    {
        cin >> i >> j;
        reverse(basket.begin() + i, basket.begin() + j + 1);
    }

    for(int k = 1; k <= N; k++)
        cout << basket[k] << " ";
    return 0;
}