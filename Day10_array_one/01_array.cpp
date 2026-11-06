#include<iostream>
using namespace std;

// Creating an array....

int main() {
    int marks[50];   //garbage values.. 0 to 49
    cout << marks[49] << " " << marks[0] << "  " << marks[20] << "  " << marks[2] << "  " << marks[5] << "\n";

    int marks2[50] = {1, 2, 3};
    // rest initialised with zeroes
    cout << marks2[0] << " " << marks2[1] << " " << marks[2] << " " << marks2[3] << " " << marks2[40]  << " " << marks2[10] << " " << marks2[20] << endl;

    int marks3[] = {1 , 2 , 3} ;
    cout << marks3[0] << " " << marks3[1] << " " << marks3[2] << " " << marks3[3] << "\n";


    // Length and sizeof arrays.........

    cout << sizeof(marks)/sizeof(marks[0]) << endl << sizeof(marks2)/sizeof(marks2[0]) << "\n" << sizeof(marks3)/sizeof(marks3[0]) << "\n";

    return 0;
}
