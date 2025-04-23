#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    bool A1 = (x % 2 == 0);
    bool A2 = (x > 4 && x <= 12);
    // cout << A1 << A2 << endl;
    if (A1 && A2)
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if (A1 || A2)
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if (A1 ^ A2)
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if (!A1 && !A2)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}