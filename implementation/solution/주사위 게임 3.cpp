#include <string>
#include <vector>
#include <map>
#include <cmath>
#include<algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    map<int, int> nums;

    nums[a]++;
    nums[b]++;
    nums[c]++;
    nums[d]++;

    for(auto num : nums)
    {
        if(num.second == 4)
            answer = 1111 * num.first;
        else if(num.second == 3)
        {
            for(auto num1 : nums)
            {
                if(num1.second == 1)
                    answer = (10 * num.first + num1.first) * (10 * num.first + num1.first);
            }
        }
        else if(num.second == 2)
        {
            int temp = 0;
            for(auto num1 : nums)
            {
                if(num1.second == 2 && num1.first != num.first)
                {
                    temp = num1.first;
                    answer = (num.first + temp) * abs(num.first - temp);
                }
            }
            if(temp == 0)
            {
                vector<int> temp1;
                for(auto num2 : nums)
                {
                    if(num2.second == 1)
                        temp1.push_back(num2.first);
                }
                answer = temp1[0] * temp1[1];
            }
        }
        if(answer == 0)
        {
            answer = min({ a, b, c, d });
        }
    }
    return answer;
}