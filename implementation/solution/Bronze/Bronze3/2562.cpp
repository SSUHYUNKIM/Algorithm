#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int input;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 9; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    int max = *max_element(v.begin(), v.end());
    int max_index = max_element(v.begin(), v.end()) - v.begin() + 1;
    cout << max << '\n';
    cout << max_index << '\n';
    return 0;
}