#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    cin >> a;
    cout<< static_cast<char>(tolower(a))<<endl;

    return 0;
}