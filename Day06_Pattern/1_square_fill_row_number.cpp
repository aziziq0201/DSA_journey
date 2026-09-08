#include<iostream>
using namespace std;


int main() {

    int n;
    cout << "Number of rows : ";
    cin >> n;
    // cout<< endl;
    // Outer Loop
    for(int i = 1; i <= n; i++) {
        
        // Inner Loop
        for(int j = 1; j <= n; j++) {
            // Work
            cout << i << " ";
        }

        // Change line
        cout << endl;
    }
    return 0;
}
