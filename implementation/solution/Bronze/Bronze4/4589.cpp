#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> v(3);

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    cout << "Gnomes:" << '\n';
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> v[j];
        if((v[2] - v[1]) * (v[1] - v[0]) > 0)
            cout << "Ordered" << '\n';
        else
            cout << "Unordered" << '\n';

    }
    return 0;
}