#include <iostream>
using namespace std;

int main()
{

    int N, sum = 0;
    cin >> N;

    int i = 1;

    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }

    cout << sum << endl;
}