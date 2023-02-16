#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cin >> n;

    while (i <= n)
    {
        int k = i;
        int j = 1;
        while (j <= i)
        {
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
