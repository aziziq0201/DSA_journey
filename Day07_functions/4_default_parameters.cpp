#include<iostream>
using namespace std;

int sum(int a , int b = 1) {  
    // always first arguement for first parameters and default work only when no arguements
    // if arguements then that value will be used and we can set default from last parameters otherwise few arguements error
    int sum = a + b;
    return sum;
}

int diff(int a , int b=1) {  // a, b are parameters
    int diff = a - b;
    return diff;
}

int main() {
    
    int s = sum(2); // 2 , 4 are arguements
    cout << "Sum = " << s << endl;
    
    int d = diff(4,2); // 4, 2 are arguements
    cout << "Diff = " << d << endl;
    
    return 0;
}
