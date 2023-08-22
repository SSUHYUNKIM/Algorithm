#include <iostream>

using namespace std;

int H, M;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> H >> M;

    if(M < 45)
    {
        if(H == 0)
            H += 24;
        H -= 1;
        M += 60;
    }
    
    cout << H <<" " << M - 45 << '\n';
    return 0;
}
