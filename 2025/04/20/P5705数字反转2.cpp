#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string num;
    cin >> num;

    reverse(num.begin(), num.end());

    cout << num << endl;
    return 0;
}