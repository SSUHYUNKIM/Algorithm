#include <iostream>
using namespace std;

int N;
string str1, str2;
bool isPossible;
int alphabet[26];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> str1 >> str2;
        isPossible = true;
        fill(alphabet, alphabet + 26, 0);

        for (int j = 0; j < str1.length(); j++) 
        {
            alphabet[str1[j] - 'a']++;
            alphabet[str2[j] - 'a']--;
        }

        for(int j = 0; j < 26; j++)
        {
            if(alphabet[j] != 0)
            {
                isPossible = false;
                break;
            }
        }
        if(isPossible)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }

    return 0;
}