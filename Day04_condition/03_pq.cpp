#include<iostream>
using namespace std;


int main() {
    int a,b;
    cout << "Enter 2 number : " << endl;
    cin >> a >> b;

    if(a > b) cout << "a is greater with value : " << a << endl;
    else  cout << "b is greater with value : " << b << endl;

    int c;
    cout << "Enter number to check odd or even : " ;
    cin >> c;

    if(c % 2 == 0) cout << "c is even : " << c << endl;
    else cout << "c is odd : " << c << endl;
    return 0;
}
