#include<iostream>
using namespace std;

// Scope(local and global) 


int num = 25;
//can use num anywhere cuz it's global variable


void sum(int a , int b) {
    if(a >= 1) {
        int x = 25;
        cout << x << endl;
    }

    cout << num << " num . " << endl;
    
    {
        int x = 15;
        cout << x << endl;
        cout << num << " num . " << endl;
    }
    
    
    
    int s = a+b;
    cout << s << endl;
}
int main() {
    sum(5,4);
    cout << num << " num . " << endl;
    int s = 10;
    cout << s;
    return 0;
}
