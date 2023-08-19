#include <iostream>
#include <string>

using namespace std;

string str;

int main(void) 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
    {
        cout << str[i] << '\n';
    }
    return 0;
}