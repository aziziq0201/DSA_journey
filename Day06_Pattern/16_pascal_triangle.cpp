#include<iostream>
#include<vector>
using namespace std;


int main() {
    int n ;
    cout << "Enter number of rows : ";
    cin >> n;

    vector<int> row;

    for(int i = 0; i < n; i++) {
        for(int j = n; j > i+1; j--)
            cout << " ";

        vector<int> newrow(i+1);
        newrow[0] = 1;
        for(int j = 1; j < i; j++) {
            newrow[j] = row[j] + row[j-1];
        }
        newrow[i] = 1;

        for(int x:newrow) 
            cout << x << " ";

        cout << endl;
        row = newrow;
    }
    return 0;
}
