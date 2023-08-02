#include <iostream>
using namespace std;

string input;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) 
    {
        int count = 0;
        getline(cin, input);
        if (input == "#")
            break;
        for (int i = 0; i < input.size(); i++) 
        {
            if (input[i] == 'a') count++;
            if (input[i] == 'A') count++;
            if (input[i] == 'e') count++;
            if (input[i] == 'E') count++;
            if (input[i] == 'i') count++;
            if (input[i] == 'I') count++;
            if (input[i] == 'o') count++;
            if (input[i] == 'O') count++;
            if (input[i] == 'u') count++;
            if (input[i] == 'U') count++;
        }
        cout << count << '\n';
    }
    return 0;
}