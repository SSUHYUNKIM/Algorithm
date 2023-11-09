#include <iostream>
using namespace std;

string subjectName, grade;
double credit, creditSum = 0.0, sum = 0.0;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 20; i++)
    {
        cin >> subjectName >> credit >> grade;

        if(grade == "P")
            continue;

        creditSum += credit;
        
        if(grade == "F")
            continue;

        if(grade == "A+")
            sum += (credit * 4.5);
        else if (grade == "A0")
            sum += (credit * 4.0);
        else if (grade == "B+")
            sum += (credit * 3.5);
        else if (grade == "B0")
            sum += (credit * 3.0);
        else if (grade == "C+")
            sum += (credit * 2.5);
        else if (grade == "C0")
            sum += (credit * 2.0);
        else if (grade == "D+")
            sum += (credit * 1.5);
        else if (grade == "D0")
            sum += (credit * 1.0);
    }

    cout << sum / creditSum << '\n';

    return 0;
}