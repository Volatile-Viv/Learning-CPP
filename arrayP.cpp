#include <iostream>
using namespace std;

int main()
{
    int arr[20], sum = 0, max = 0;

    cout << "Enter the values of array - " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }

        sum = sum + arr[i];
    }

    cout << "Sum -> " << sum << endl;
    cout << "Max -> " << max << endl;

    return 0;
}
