#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;

    cout << "Enter Operator : ";
    cin >> op;

    // // Calculator
    // if (op == '+')
    // {
    //     cout << "a + b = " << (a + b) << endl;
    // }
    // else if (op == '-')
    // {
    //     cout << "a - b = " << (a - b) << endl;
    // }
    // else if (op == '*')
    // {
    //     cout << "a * b = " << (a*b) << endl;
    // }
    // else if (op == '/')
    // {
    //     cout << "a / b = " << (a/b) << endl;
    // }
    // else
    // {
    //     cout << "Invalid Operator";
    // }



    // switch
    switch(op) {
        case '+':
            cout << " a + b = " << (a+b) << endl;
            break;
        case '-':
            cout << "a - b = " << (a-b) << endl;
            break;
        case '*' :
            cout << "a * b = " << (a*b) << endl;
            break;
        case '/': 
            cout << "a / b = " << (a/b) << endl;
            break;
        default:
            cout << "Invalid Operator";
    }
    return 0;
}
