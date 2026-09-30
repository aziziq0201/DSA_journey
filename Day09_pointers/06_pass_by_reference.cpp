#include<iostream>
using namespace std;

// Pass by reference using reference variable 

void changeA(int &param) {
    param = 20;
    cout << param << "\n";

}

int main() {
    
    int a = 10;
    int &b = a;

    b = 25;
    cout << b << endl;
    cout << a << endl;

    // just int &c ; show error need to initialize

    changeA(a);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
