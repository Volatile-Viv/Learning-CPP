#include <bits/stdc++.h>
using namespace std;

int main()
{
    char grade;
    double basicSalary, allowance, hra, da, pf;
    int grossSalary;

    cin >> basicSalary >> grade;

    hra = 0.2 * basicSalary;
    da = 0.5 * basicSalary;
    pf = 0.11 * basicSalary;

    if (grade == 'A')
    {
        allowance = 1700;
    }
    else if (grade == 'B')
    {
        allowance = 1500;
    }
    else
    {
        allowance = 1300;
    }

    grossSalary = round(basicSalary + hra + da + allowance - pf);

    cout << grossSalary << endl;
}