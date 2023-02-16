#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, p, ans = 1;

    cin >> n;
    cin >> p;

    while (i <= p)
    {
        ans = ans * n;
        i = i + 1;
    }

    cout << ans << endl;

    return 0;
}
