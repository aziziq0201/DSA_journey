#include<iostream>
using namespace std;

// Binomial Coefficient
// nCr = (n!) / ( (r!)*(n-r !) );

int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) 
        factorial *= i;

    return factorial;
}

int binCoeff(int n , int r) {
    return fact(n) / ( fact(r) * fact(n-r));
}

int main() {
    int n, r;
    cout << "Enter n and r : ";
    cin >> n >> r;

    int coeff = binCoeff(n,r);
    cout << "Binomial Coefficient of " << n<< "C"<<r << " " << coeff << endl;
    return 0;
}
