#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer(queries.size());
    int count = 0;
    for (auto query : queries) 
    {
        int min = -1;
        int q1 = query[0];
        int q2 = query[1];
        int q3 = query[2];

        for(int i = q1; i <= q2; i++)
        {
            if(arr[i] > q3 && (min == -1 || arr[i] < min))
                min = arr[i];
        }
        answer[count] = min;
        count++;
    }

    return answer;
}