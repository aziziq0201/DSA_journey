#include<iostream>
using namespace std;


int main() {
    int n; 
    cout << "Enter number of rows : ";
    cin >> n;

    int mid = (n % 2 == 0 ? n/2 : (n+1)/2);

    for(int i = 0; i < mid; i++) {
        for(int j = mid-1; j > i; j--) 
        cout << "  ";
        for(int j = 0; j < 2*i + 1; j++) 
            cout << "* ";
        cout << endl;        
    }

    for(int i = mid; i < n; i++) {
        for(int j = mid-1; j < i; j++){
            if(n%2 == 0 && j == mid-1) continue;
            cout << "  ";
        }
        for (int j = 0; j < 2*(n-i)-1; j++)
        {
            cout << "* ";
        }
        

        cout << endl;
    }

    return 0;
}
