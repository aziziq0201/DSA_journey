#include<iostream>
using namespace std;

int sum(int a , int b) {  // a, b are parameters
    int sum = a + b;
    return sum;
}

int diff(int a , int b) {  // a, b are parameters
    int diff = a - b;
    return diff;
}

int main() {
    
    int s = sum(2,4); // 2 , 4 are arguements
    cout << "Sum = " << s << endl;
    
    int d = diff(4,2); // 4, 2 are arguements
    cout << "Diff = " << d << endl;
    
    return 0;
}
