#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (auto query : queries) 
    {
        int q1 = query[0];
        int q2 = query[1];
        int q3 = query[2];

        for(int i = 0; i <= arr.size(); i++)
        {
            if(i % q3 == 0 && i >= q1 && i <= q2)
                arr[i] += 1;
        }
    }

    answer = arr;
    return answer;
}