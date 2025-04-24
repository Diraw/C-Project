#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 100 == 0)
    {
        // 能被100整除
        if (n % 400 == 0)
        {
            cout << "1"; // 能被400整除是闰年
        }
        else
        {
            cout << "0"; // 不能被400整除不是闰年
        }
    }
    else
    {
        // 不能被100整除
        if (n % 4 == 0)
        {
            cout << "1"; // 能被4整除是闰年
        }
        else
        {
            cout << "0"; // 不能被4整除不是闰年
        }
    }

    return 0;
}