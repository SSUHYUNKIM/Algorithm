#include <iostream>
#include <algorithm>
using namespace std;

int N;
string word[20000];

int compare(string a, string b)
{
    if(a.length() == b.length())
        return a < b;
    else 
        return a.length() < b.length();
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> word[i];

    sort(word, word + N, compare);

    for(int i = 0; i < N; i++)
    {
        if(word[i] == word[i - 1])
            continue;   
        cout << word[i] << '\n';
    }

    return 0;
}