#include<iostream>
using namespace std;


int main() {
    int arr[25] = {7, 5, 2, 1, 3};

    for(int idx = 0; idx < sizeof(arr)/sizeof(arr[0]); idx++ ) {
        cout << arr[idx] << " ";
    }
    cout << endl;


    int n;  
    cout << "Enter size of array : ";
    cin >> n;

    int arr2[n];

    for(int i = 0; i < n; i++) 
        cin >> arr2[i];

    for(int i = 0; i < n; i++) 
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}
