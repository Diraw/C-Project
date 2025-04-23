#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (s >= m * t)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << floor(m - s * 1.0 / t) << endl;
    return 0;
}