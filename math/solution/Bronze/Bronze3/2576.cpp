#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int input, sum = 0;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for(int i = 0; i < 7; i++)
    {
        cin >> input;
        if(input % 2 == 1)
        {
            v.push_back(input);
            sum += input;
        }
    }

    if(v.size() == 0)
        cout << -1 << '\n';
    else
    {
        cout << sum << '\n';
        cout << *min_element(v.begin(), v.end()) << '\n';
    }
    return 0;
}