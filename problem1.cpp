#include <iostream>
using namespace std;

int main()
{
    char n;

    cout << "Enter the character --> ";
    cin >> n;

    if (n >= 65 && n < 97)
    {
        cout << "1" << endl;
    }
    else if (n >= 65 && n <= 122)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
