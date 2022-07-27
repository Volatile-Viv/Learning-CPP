#include <iostream>
using namespace std;

int main()
{
    int a, b, n;

    cout << "Enter first number --> ";
    cin >> a;

    cout << "Enter second number --> ";
    cin >> b;

    n = (a > b) ? a : b;

    do
    {
        if (n % a == 0 && n % b == 0)
        {
            cout << "LCM is " << n;
            break;
        }
        else
            ++n;
    } while (true);

    return 0;
}