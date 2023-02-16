#include <iostream>
using namespace std;

int main()
{
    int s, e, w, cel;

    cin >> s;
    cin >> e;
    cin >> w;

    while (s <= e)
    {
        cel = (s - 32) / 1.8;
        cout << s << "\t" << cel << endl;
        s = s + w;
        cel = 0;
    }

    return 0;
}