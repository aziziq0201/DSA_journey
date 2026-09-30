// WAF to print factorial of a number , n

#include<iostream>
using namespace std;

int factorial(int a) {
    if(a == 0 || a == 1) return 1;
    return a*factorial(a-1);
}

int main() {
    
    cout << factorial(8) << endl;;
    return 0;
}
