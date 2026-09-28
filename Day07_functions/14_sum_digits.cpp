#include<iostream>
using namespace std;

// Sum of digits
int sumDig(int x) {
    int sum = 0;
    int temp = x;
    while(temp) {
        sum = sum + temp%10;
        temp /= 10;
    }
    return sum;
}

int main() {
    cout << "Sum dig of " << 5 << " is : " << sumDig(5) << endl;
    cout << "Sum dig of " << 12345 << " is : " << sumDig(12345) << endl;
    cout << "Sum dig of " << 213 << " is : " << sumDig(213) << endl;
    cout << "Sum dig of " << 256 << " is : " << sumDig(256) << endl;
    cout << "Sum dig of " << 2135 << " is : " << sumDig(2135) << endl;
    cout << "Sum dig of " << 67969 << " is : " << sumDig(67969) << endl;
    cout << "Sum dig of " << 74235 << " is : " << sumDig(74235) << endl;
    return 0;
}
