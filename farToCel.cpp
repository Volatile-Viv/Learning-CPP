#include <iostream>
using namespace std;

int main()
{
    float far, cel;

    cout << "Enter in Fahrenheit --> ";
    cin >> far;

    cel = (5.0 / 9) * (far - 32);

    cout << "In Celsius --> " << cel << endl;
}
