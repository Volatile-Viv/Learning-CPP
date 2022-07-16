#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cin >> n;

    while (i <= n)
    {
        int x = i;
        int j = 1;
        int k = 1;

        while (k <= n - i)
        {
            cout << " ";
            k = k + 1;
        }

        while (j <= i)
        {
            cout << x;
            x = x + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
