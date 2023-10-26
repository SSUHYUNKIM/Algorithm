#include <iostream>
#include <algorithm>
using namespace std;

int N;
double score[10000000];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> score[i];

    sort(score, score + N);

    cout << fixed;
    cout.precision(3);

    for(int i = 0; i < 7; i++)
        cout << score[i] << '\n';

    return 0;
}