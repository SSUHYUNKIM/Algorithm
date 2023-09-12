#include <iostream>
#include <algorithm>
using namespace std;

string word;
int alphabet[26] = {};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> word;
    
    for(int i = 0; i < word.length(); i++)
        alphabet[word[i] - 'a']++;

    for(int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";

    return 0;
}