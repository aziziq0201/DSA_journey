#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter num : ";
    cin >> n;

    int temp = n, num = 0;
    while(temp) {
        num = num*10 + temp%10;
        temp /= 10;
    }

    cout << num << endl;
    return 0;
}
