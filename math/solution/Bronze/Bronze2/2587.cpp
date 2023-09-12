#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num, sum = 0;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 5; i++)
    {
        cin >> num;
        v.push_back(num);
        sum += num;
    }

    sort(v.begin(), v.end());

    cout << sum / 5 << '\n';
    cout << v[2] << '\n';
    
    return 0;
}