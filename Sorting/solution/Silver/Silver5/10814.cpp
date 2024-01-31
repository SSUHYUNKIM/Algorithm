#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, age;
string name;
pair<int,string> temp;
vector<pair<int,string>> arr;

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> temp.first >> temp.second;
        arr.push_back(temp);
    }

    stable_sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < N; i++)
        cout << arr[i].first << ' ' << arr[i].second << '\n';

    return 0;
}