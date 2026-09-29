#include<iostream>
using namespace std;

/*
long int x;
long long int x OR long long x;
double x;
short int x;
unsigned int x;
usigned short int x;
long double x;


*/


void binToDec(int binNum) {
    int decNum = 0;
    int power = 1;
    while(binNum) {
        decNum += (binNum % 10)*power;
        power *= 2;
        binNum /= 10;
    }
    cout << decNum << endl;
}

int main() {
    binToDec(101);
    binToDec(1010);
    binToDec(1011);
    binToDec(1111);
    binToDec(111);
    binToDec(1110);

    return 0;
}
