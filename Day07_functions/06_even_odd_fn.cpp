// WAF to print if a number is odd or even

#include<iostream>
using namespace std;


// even-> true   odd ->false
bool isEven(int a) {
    if(a % 2 == 0) return true;
    return false;
}

int main() {
    
    cout << isEven(4) << endl;
    return 0;
}
