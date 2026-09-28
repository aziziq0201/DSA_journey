// WAF to print if a number is prime or not;

#include<iostream>
using namespace std;

void isPrime(int x) {
    if(x <= 1) {
        cout << "Not a prime" << endl;
        return;
    }
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            cout << x << " is Not a Prime ! " << endl;
            return;
        }

    }
    cout << x << " Is a prime number " << endl;
}

int main() {
    
    isPrime(2);
    isPrime(3);
    isPrime(4);
    isPrime(5);
    isPrime(11);
    isPrime(13);
    isPrime(19);
    isPrime(20);
    isPrime(43);
    isPrime(50);
    isPrime(30);
    isPrime(29);
    isPrime(31);
    isPrime(35);
    
    return 0;
}
