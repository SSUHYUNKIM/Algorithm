#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, v, input;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    cin >> v;

    cout << count(vec.begin(), vec.end(), v) << '\n';
    return 0;
}