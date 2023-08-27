#include <iostream>

using namespace std;

int n;
bool student[31];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    for(int i = 1; i <= 28; i++)
    {
        cin >> n;
        student[n] = true;
    }

    for(int i = 1; i <= 30; i++)
    {
        if(!student[i])
            cout << i << '\n';
    }
    return 0;
}