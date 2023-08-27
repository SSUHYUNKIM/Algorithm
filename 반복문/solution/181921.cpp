#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for(int i = l; i <= r; i++)
    {
        string temp = to_string(i);
        bool check = true;
        if(i % 5 == 0)
        {
            for(int j = 0; j < temp.size(); j++)
            {
                if((temp[j] - '0') % 5 != 0)
                {
                    check = false;
                    break;
                }
            }
            if(check)
                answer.push_back(i);
        }
    }

    if(answer.size() == 0)
        answer.push_back(-1);

    return answer;
}