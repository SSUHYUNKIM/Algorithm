#include <iostream>

using namespace std;

int N, x, y, minX = 10001, minY = 10001, maxX = -10001, maxY = -10001;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;

    for(int i = 0 ; i < N; i++)
    {
        cin >> x >> y;
        minX = min(x, minX);
        minY = min(y, minY);
        maxX = max(x, maxX);
        maxY = max(y, maxY);
    }

    cout << (maxX- minX) * (maxY - minY) << '\n';
    return 0;
}