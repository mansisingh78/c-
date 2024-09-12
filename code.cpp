#include <iostream>
using namespace std;
int main()
{
    // int age = 25;          // 4bytes
    // char grade = 'A';      // 1bytes
    // float pi = 3.14;       // 4bytes
    // bool isSafe = false;   // 1bytes
    // double price = 100.99; // 8bytes

    // char to int
    char grade = 'a'; // 97

    int value = grade;
    cout << value << endl;
    return 0;

    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}
