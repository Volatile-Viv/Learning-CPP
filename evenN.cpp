#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n -> ";
    cin >> n;

    cout << "Using For Loop - " << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    cout << "Using While Loop - " << endl;

    int j = 1;

    while (j <= n)
    {
        if (j % 2 == 0)
        {
            cout << j << endl;
        }
        j++;
    }

    cout << "Using Do While Loop - " << endl;
    int k = 1;

    do
    {
        if (k % 2 == 0)
        {
            cout << k << endl;
        }
        k++;
    } while (k <= n);

    return 0;
}
