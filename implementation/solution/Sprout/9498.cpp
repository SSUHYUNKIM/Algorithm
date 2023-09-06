#include <iostream>
using namespace std;

int score;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> score;

    if(score >= 90 && score <= 100)
        cout << "A" << '\n';
    else if(score >= 80)
        cout << "B" << '\n';
    else if(score >= 70)
        cout << "C" << '\n';
    else if(score >= 60)
        cout << "D" << '\n';
    else
        cout << "F" << '\n';

    return 0;
}