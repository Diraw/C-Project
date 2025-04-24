#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int Local = 5 * n;
    int Luogu = 3 * n + 11;
    if (Local > Luogu)
    {
        cout << "Luogu" << endl;
    }
    else
    {
        cout << "Local" << endl;
    }
    return 0;
}