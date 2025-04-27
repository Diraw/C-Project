#include <iostream>

using namespace std;

int main()
{
    int y,m;
    cin >> y>>m;
    bool target;

    if (y % 100 == 0)
    {
        // 能被100整除
        if (y % 400 == 0)
        {
            target=true; // 能被400整除是闰年
        }
        else
        {
            target=false; // 不能被400整除不是闰年
        }
    }
    else
    {
        // 不能被100整除
        if (y % 4 == 0)
        {
            target=true; // 能被4整除是闰年
        }
        else
        {
            target=false; // 不能被4整除不是闰年
        }
    }
    if (target)
    {
        if (m == 2)
        {
            cout << "29" << endl;
        }
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            cout << "31" << endl;
        }
        else
        {
            cout << "30" << endl;
        }
    }
    else
    {
        if (m == 2)
        {
            cout << "28" << endl;
        }
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            cout << "31" << endl;
        }
        else
        {
            cout << "30" << endl;
        }
    }

    return 0;
}