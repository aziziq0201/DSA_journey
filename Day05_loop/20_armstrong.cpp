#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(n < 0) {
        cout << "Not an Armstrong number ! " << endl;
        return 0;
    }

    // First, count the number of digits
    int temp = n;
    int digits = 0;
    
    while(temp) {
        digits++;
        temp /= 10;
    }

    // Now, calculate the sum of digits raised to the power of the digit count
    temp = n;
    int sum = 0;
    
    while(temp) {
        sum += round(pow(temp % 10, digits)); // round() prevents double-to-int truncation errors
        temp /= 10;
    }

    if(sum != n) {
        cout << n << " is not an Armstrong number ! " << endl;
        return 0;
    }

    cout << n << " is an Armstrong number ....<3 " << endl;

    return 0;
}