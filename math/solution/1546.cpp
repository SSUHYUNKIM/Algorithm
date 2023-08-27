#include <iostream>
#include <vector>

using namespace std;

int N, score, maxNum = 0;
double sum = 0;
vector<double> v;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> score;
        v.push_back(score);

        if (maxNum < score)
            maxNum = score;
    }

    for(int i = 0 ; i < N; i++)
    {
        sum += v[i] / maxNum;
    }

    cout << sum / N * 100 << '\n';
    return 0;
}