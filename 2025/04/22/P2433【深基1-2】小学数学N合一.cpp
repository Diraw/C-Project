#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double pi = 3.141593;
    int r, l;
    double V;
    switch (n)
    {
    case 1:
        cout << "I love Luogu!" << endl;
        break;

    case 2:
        cout << "6 4" << endl;
        break;

    case 3:
        cout << "3" << endl
             << "12" << endl
             << "2" << endl;
        break;

    case 4:
        cout << setprecision(6) << 500.0 / 3 << endl;
        break;

    case 5:
        cout << (260 + 220) / (12 + 20) << endl;
        break;

    case 6:
        cout << sqrt(6 * 6 + 9 * 9) << endl;
        break;

    case 7:
        cout << 110 << endl
             << 90 << endl
             << 0 << endl;
        break;

    case 8:
    {
        int r = 5;
        double pi = 3.141593;
        cout << 2 * pi * r << endl;
        cout << r * r * pi << endl;
        cout << 4.0 / 3 * pi * r * r * r << endl;
        break;
    }

    case 9:
        cout << 2 * (1 + 2 * (1 + 2 * (1 + 1))) << endl;
        break;

    case 10:
        cout << 9 << endl;
        break;

    case 11:
        cout << 100.0 / 3 << endl;
        break;

    case 12:
        cout << "13" << endl
             << "R" << endl;
        break;

    case 13:
        V = 4.0 / 3 * pi * (4 * 4 * 4 + 10 * 10 * 10);
        l = cbrt(V) / 1;
        cout << l << endl;
        break;

    case 14:
        cout << 50 << endl;
        break;

    default:
        break;
    }
    return 0;
}