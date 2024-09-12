#include <iostream>
using namespace std;
int main()
{
    // while loop
    // int count = 1;
    // int n = 50;

    // while (count <= n)
    // {
    //     cout << count << " ";
    //     count++;
    // }
    // for loop

    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " ";
    // }
    // sum of numbers from 1 to n.

    int n = 3;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum = " << sum << endl;

    return 0;
}
