#include <iostream>
using namespace std;
#include <cmath>

int N, B, C;
long long answer = 0;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> B >> C;

    for(int i = 0; i < N; i++)
    {   
        answer++;
        A[i] -= B;
        if(A[i] > 0)
        {
            if(A[i] % C == 0)
                answer += (A[i] / C);
            else
                answer += ((A[i] / C) + 1);
        }
    }

    cout << answer << '\n';
    return 0;
}