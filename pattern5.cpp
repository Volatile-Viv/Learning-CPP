#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cin >> n;

    int x = 1;

    while (i <= n)
    {
        int j = 1;
        int k = 1;

        while (k <= n - i)
        {
            cout << " ";
            k = k + 1;
        }

        while (j <= x)
        {
            cout << "*";
            j = j + 1;
        }
        x = x + 2;
        cout << endl;
        i = i + 1;
    }

    return 0;
}
