#include <iostream>
using namespace std;

int main()
{
    int n, evenSum = 0, oddSum = 0, t = 0;

    cout << "Enter the number --> ";
    cin >> n;

    while (n > 0)
    {
        t = n % 10;
        n = n / 10;

        if (t % 2 == 0)
        {
            evenSum = evenSum + t;
        }

        else
        {
            oddSum = oddSum + t;
        }
    }

    cout << evenSum << " " << oddSum << endl;

    return 0;
}
