#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    double V = 3.14 * r * r * h * 1e-3;
    int n = ceil(20 / V);
    cout << n << endl;
    return 0;
}