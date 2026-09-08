#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int mid = n % 2 == 0? n/2 : (n+1)/2;

    for(int i = 0; i < mid; i++) {
        for(int j = 0; j <= i; j++) cout << "* ";
        
        if(n%2 == 0) 
            for(int j = 0; j < (n - 2*i)-2; j++) {

                cout << "  ";
            }

        else 
            for(int j = 0; j <= (n - 2*i)-2; j++) {

                cout << "  ";
            }
        for(int j = 0; j <= i; j++) cout << "* ";
        cout << endl;
    }

    for(int i = mid; i < n; i++) {
        for(int j = n -i; j > 0; j-- ) cout << "* ";
        if(n%2==0)
            for(int j = 0; j < 2 * i - n; j++) cout << "  ";
        else
            for(int j = 0; j <= 2 * i - n; j++) cout << "  ";

        for(int j = n -i; j > 0; j-- ) cout << "* ";

        cout << endl;
    }
    return 0;
}
