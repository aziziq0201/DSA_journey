#include<iostream>
using namespace std;

void func (int arr[]) {
    arr[0] = 1000;
}

void func2(int *ptr) {
    ptr[1] = 1000;
}

int main() {
    int a = 5;
    int *ptr = &a;

    cout << ptr << endl;

    int arr[] = {1, 2 , 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+1)+(1) << endl;
    cout << 0[arr] << endl;
    cout << 01[arr] << endl;
    cout << 2[arr] << endl;


    func(arr);
    cout << arr[0] << endl;

    func2(arr);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    return 0;
}
