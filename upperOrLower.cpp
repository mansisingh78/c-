#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter ch:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowerCase\n";
    }
    else
    {
        cout << "upperCase\n";
    }
    return 0;
}