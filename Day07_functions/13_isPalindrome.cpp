#include<iostream>
using namespace std;

// Palindrome
bool isPalindrom(int x) {
    int temp = x;
    int palin = 0;

    while(temp) {
        palin = palin * 10 + temp % 10 ;
        temp /= 10;
    }

    if (palin == x) return true;
    return false;
}

int main() {
    cout << isPalindrom(121) << endl;
    cout << isPalindrom(1221) << endl;
    cout << isPalindrom(1121) << endl;
    cout << isPalindrom(11211) << endl;
    cout << isPalindrom(12321) << endl;
    cout << isPalindrom(123321) << endl;
    cout << isPalindrom(12332) << endl;

    cout << endl<<endl;
    cout << isPalindrom(17071) << endl;
    cout << isPalindrom(258897) << endl;
    cout << isPalindrom(2588) << endl;
    cout << isPalindrom(2588521) << endl;
    cout << isPalindrom(258852) << endl;
    return 0;
}
