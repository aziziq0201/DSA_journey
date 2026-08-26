#include<iostream>
using namespace std;


int main() {
    int n;
    
    do {
        cout << "Enter a number : ";
        cin >> n;
        if(n % 10 == 0) {
            cout << "You enter a multiple of 10 !" << endl;
            break;
        }
    }while(true);
    
    return 0;
}
