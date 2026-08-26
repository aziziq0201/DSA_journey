#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int num;
    cout << "Enter a number : " ;
    cin >> num;

    int x = num, count = 0, sum = 0;

    while(x) {
        count++;
        x /= 10;
    }

    x = num;
    while(x) {
        sum = sum + int(round(pow(x%10,count)));
        x /= 10;
    }

    if(sum == num) cout << "Armstrong " << endl;
    else cout << "Not a armstrong " << endl;
    return 0;
}
