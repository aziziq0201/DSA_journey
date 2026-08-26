#include <iostream>
using namespace std;

int main()
{

    // +ve -ve 0
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "number is positive.\n";
    }
    else if (num < 0)
    {
        cout << "number is negative.\n";
    }
    else
    {
        cout << "number is zero.\n";
    }

    return 0;
}
