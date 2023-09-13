#include <iostream>
#include <list>
using namespace std;

int N;
string password;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        list<char> test;
        auto cursor = test.end();

        cin >> password;

        for(auto word : password)
        {
            if(word == '<')
            {
                if(cursor != test.begin())
                    cursor--;
            }
            else if(word == '>')
            {
                if(cursor != test.end())
                    cursor++;
            }
            else if(word == '-')
            {
                if(cursor != test.begin())
                {
                    cursor--;
                    cursor = test.erase(cursor);
                }
            }
            else
                test.insert(cursor, word);
        }
        for(auto t : test)
            cout << t;
        cout << '\n';
    }

    return 0;
}