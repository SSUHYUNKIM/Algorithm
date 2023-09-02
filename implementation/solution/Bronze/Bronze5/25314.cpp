#include <iostream>

using namespace std;

int N;
string answer;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;

    for(int i = 0; i < N; i += 4)
    {
        answer += "long ";
    }

    cout << answer << "int" << '\n';
    return 0;
}
