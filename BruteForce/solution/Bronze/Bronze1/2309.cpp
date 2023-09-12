#include <iostream>
#include <algorithm>
using namespace std;

int sum = 0;
int dwarf[10];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 9; i++)
    {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    sort(dwarf, dwarf + 9);

    for(int i = 0; i < 9; i++)
    {
        for(int j = i + 1; j < 9; j++)
        {
            if(dwarf[i] + dwarf[j] == sum - 100)
            {
                for(int k = 0; k < 9; k++)
                {
                    if(k == i || k == j)
                        continue;
                    cout << dwarf[k] << '\n';
                }
                return 0;
            }
        }
    }

    return 0;
}