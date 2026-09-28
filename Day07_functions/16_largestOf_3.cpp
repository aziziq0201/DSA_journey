#include<iostream>
using namespace std;

// print largest of 3 numbers
int largest(int a, int b, int c) {
    if(a > b) {
        if(a > c) 
            return a;
        else 
            return c;
    }
    if(b > a) {
        if(b > c) 
            return b;
        else 
            return c;
    }
    return 0;

}

int main() {
    cout << largest(1,2,3) << endl;;
    cout << largest(70,243,789) << endl;;
    cout << largest(69,235,236621) << endl;;
    cout << largest(823, 2342, 512) << endl;;
    cout << largest(31,234,25) << endl;;

    return 0;
}
