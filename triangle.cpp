#include <iostream>
using namespace std;
int main()
{
    // triangle pattern
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    // output
    //  *
    //  **
    //  ***
    //  ****

    // number pattern
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }
    return 0;
    // output
    // 1
    // 22
    // 333
    // 4444

    // character pattern
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
    // output
    // A
    // BB
    // CCC
    // DDDD

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
    // output
    // 1
    // 12
    // 123
    // 1234
}