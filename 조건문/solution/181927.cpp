#include <string>
#include <vector>
#include <iostream>


using namespace std;

vector<int> solution(vector<int> num_list) {
    int length = num_list.size();
    vector<int> answer(length + 1);
    int temp = 0;

    if(num_list[length - 2] < num_list[length - 1])
        temp = num_list[length - 1] - num_list[length - 2];
    else
        temp = num_list[length - 1] * 2;
    
    for(int i = 0; i < length; i++)
        answer[i] = num_list[i];

    answer[length] = temp;
    return answer;
}