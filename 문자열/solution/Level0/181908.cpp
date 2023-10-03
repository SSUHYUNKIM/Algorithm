#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int index = my_string.rfind(is_suffix);
    if(index != string::npos && my_string.substr(index, my_string.size() - index + 1) == is_suffix)
        answer = 1;
    return answer;
}