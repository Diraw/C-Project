#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;
    int t = ceil(1.0 * s / v) + 10;
    int h = t / 60;
    int m = t % 60;
    cout << 8 - h << ":" << 60 - m << endl;
    return 0;
}