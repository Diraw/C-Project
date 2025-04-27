#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int total = 0;
    int target = 1;
    for (int i = 1; i <= 7; i++)
    {
        cin >> a >> b;
        if (a + b > total)
        {
            target = i;
            total = a + b;
        }
    }
    cout << target << endl;
    return 0;
}