#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int T, n;
string p, x;

void parse(string& tmp, deque<int>& d)
{
    string cur = "";
    for(int i = 0; i < tmp.length();i++)
    {
        if (isdigit(tmp[i])) 
            cur += tmp[i];
        else 
        {
            if (!cur.empty()) 
            {
                d.push_back(stoi(cur));
                cur = "";
            }
        }
    }
}

void print_result(deque<int>& d)
{
    cout << '[';
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i];
        if(i + 1 != d.size())
            cout << ',';
    }
    cout << "]" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        deque<int> dq;
        bool rev = false, error = false;

        cin >> p >> n >> x;

        parse(x, dq);

        for(auto pp : p)
        {
            if(pp == 'R')
            {
                if (rev)
                    rev = false;
                else
                    rev = true;
            }
            else
            {
                if(dq.empty())
                {
                    error = true;
                    break;
                }
                if(rev)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if(error)
            cout << "error" << '\n';
        else
        {
            if(rev)
                reverse(dq.begin(), dq.end());
            print_result(dq);
        }
    }

    return 0;
}