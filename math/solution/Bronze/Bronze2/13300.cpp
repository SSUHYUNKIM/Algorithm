#include <iostream>
using namespace std;

int N, K, S, Y, answer = 0;
int student[7][2] = {0};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> N >> K;
    
    
    for(int i = 0 ; i < N; i++)
    {
        cin >> S >> Y;
        student[Y][S]++;
    }

    for(int i = 1; i < 7; i++)
    {
        for(int j = 0; j < 2; j ++)
        {
            if(student[i][j] != 0)
            {
                answer += student[i][j] / K;
                if(student[i][j] % K != 0)
                    answer++;
            }
        }
    }

    cout << answer << '\n';

    return 0;
}
