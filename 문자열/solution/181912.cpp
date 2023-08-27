#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(auto str : intStrs)
    {
        int temp = stoi(str.substr(s, l));
        if(temp > k)
            answer.push_back(temp);
    }
    return answer;
}