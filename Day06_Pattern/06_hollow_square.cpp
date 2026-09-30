#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of rows : ";
    cin>> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1) {
                cout << "* ";
                continue;
            }
            if(j == 0 || j == n-1) {
                cout << "* ";
                continue;
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
