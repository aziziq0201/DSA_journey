#include<iostream>
using namespace std;

// Bin Addition

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

int binAdd(int num1, int num2) {
    int num = 0, power = 1, carry = 0;
    while(num1 || num2 || carry) {
        int sum = num1%10 + num2%10 + carry;
        
        if(sum == 0) 
            carry = 0;
        else if(sum == 1) {
            num += power;
            carry = 0;
        }
        else if(sum == 2) {
            carry = 1;
        }
        else if (sum == 3) {
            num +=  power;    
            carry = 1;
        }

        power *= 10;
        num1 /= 10;
        num2 /= 10;
    }


    binToDec(num);
    return num;
}


int main() {
    cout << "Bin addition : " << binAdd(101,1010) << endl;
    cout << "Bin addition : " << binAdd(1010,1010) << endl;
    cout << "Bin addition : " << binAdd(10,1010) << endl;
    return 0;
}
