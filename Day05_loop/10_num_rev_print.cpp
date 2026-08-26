#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter num : ";
    cin >> n;

    while(n) {
        cout << n % 10;
        n /= 10;
    }

    cout << endl;
    return 0;
}
