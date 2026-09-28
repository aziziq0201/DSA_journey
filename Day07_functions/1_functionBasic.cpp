#include<iostream>
using namespace std;

void sayHello() {
    cout << "Hello world <3 :)"<<endl;
}

void assistant() {
    sayHello();
    cout << "Work done \n";
}

int main() {

    // sayHello(); // function call
    // sayHello();
    // sayHello();
    // sayHello(); 

    assistant();
    return 0;
}