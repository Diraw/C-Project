#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float t;
    int n;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t / n << endl;
    cout << 2 * n << endl;
    return 0;
}
