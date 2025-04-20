#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t = (60 - b) + (c - a - 1) * 60 + d;
    cout << t / 60 << " " << t % 60 << endl;
    return 0;
}