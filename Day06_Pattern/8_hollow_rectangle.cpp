#include<iostream>
using namespace std;


int main() {
    int row, column;
    cout << "Enter number of rows : ";
    cin >> row;

    cout << "Enter number of columns : ";
    cin >> column;

    for(int i = 0; i < row; i++) {
        cout << "* ";
        for(int j = 1; j < column-1; j++) {
            if(i == 0 || i == row-1)
                cout << "* ";
            else 
                cout << "  ";
            
        }
        cout << "* " << endl;
    }
    return 0;
}
