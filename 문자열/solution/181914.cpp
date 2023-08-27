#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(auto num : number)
    {
        answer += num - '0';
    }
    answer %= 9;
    return answer;
}