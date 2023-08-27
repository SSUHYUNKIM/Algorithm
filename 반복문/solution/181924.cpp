#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto query : queries) 
    {
        int q1 = query[0];
        int q2 = query[1];

        int temp = arr[q1];
        arr[q1] = arr[q2];
        arr[q2] = temp;
    }

    answer = arr;
    return answer;
}