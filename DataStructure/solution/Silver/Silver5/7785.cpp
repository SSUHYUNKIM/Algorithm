#include <iostream>
#include <map>
using namespace std;

int n;
string name, record;
map<string, string, greater<string>> m;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> record;
        
        if(record == "enter")
            m.insert(make_pair(name, record));
        else
            m.erase(name);
    }

    for(auto it : m)
        cout << it.first << '\n';

    return 0;
}