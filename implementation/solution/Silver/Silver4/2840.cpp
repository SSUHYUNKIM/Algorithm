#include <iostream>
#include <vector>
using namespace std;

int N, K, S, temp = 0;
char word;
vector<char> v(25);

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;

    for (int i = 0; i < N; i++) 
        v[i] = '?';

    for(int i = 0; i < K; i++)
    {
        cin >> S >> word;
        S %= N;
        temp -= S;
        if(temp < 0)
            temp += N;
        if(v[temp] != '?' && v[temp] != word)
        {
            cout << '!' << '\n';
            return 0;
        }
        else
            v[temp] = word;
    }

    for(int i = 0; i < N - 1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(v[i] != '?' && v[i] == v[j])
            {
                cout << '!' << '\n';
                return 0;
            }
        }
    }

    for(int i = 0; i < N; i++) 
        cout << v[(i + temp) % N];

    cout << '\n';
    return 0;
}