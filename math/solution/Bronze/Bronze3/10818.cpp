#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, input;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << '\n';
    return 0;
}