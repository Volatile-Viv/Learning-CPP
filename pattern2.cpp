#include <iostream>
using namespace std;

int main()
{
    int i = 1, k = 0, n;

    cout << "Enter the value of n --> ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << k << " ";
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
