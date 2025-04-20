#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int t = ceil(1.0 * s / v) + 10;

    t = 8 * 60 - t;

    if (t < 0)
    {
        t += 24 * 60;
    }

    int h = t / 60;
    int m = t % 60;

    cout << setfill('0') << setw(2) << h << ":" << setw(2) << m << endl;

    return 0;
}