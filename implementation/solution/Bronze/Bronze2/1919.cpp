#include <iostream>
#include <cmath>
using namespace std;

int answer = 0;
string word1, word2;
int alphabet1[26], alphabet2[26];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> word1 >> word2;

    for(int i = 0; i < word1.length(); i++)
        alphabet1[word1[i] - 'a']++;

    for(int i = 0; i < word2.length(); i++)
        alphabet2[word2[i] - 'a']++;

    for(int i = 0; i < 26; i++)
    {
        if(alphabet1[i] != alphabet2[i])
            answer += abs(alphabet1[i] - alphabet2[i]);
    }

    cout << answer << '\n';

    return 0;
}