#include <iostream>
#include <algorithm>
using namespace std;

int N, M, minVal = 65;
string board[51];

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int cntWB(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
            if(board[x + i][y + j] != WB[i][j]) 
                cnt++;
    }
    return cnt;
}
 
int cntBW(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
            if(board[x + i][y + j] != BW[i][j]) 
                cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++)
        cin >> board[i];

    for(int i = 0; i + 8 <= N; i++)
    {
        for(int j = 0; j + 8 <= M; j++)
        {
            int temp = min(cntBW(i, j) , cntWB(i, j));
            if(temp < minVal)
                minVal = temp;
        }
    }

    cout << minVal << '\n';
    return 0;
}