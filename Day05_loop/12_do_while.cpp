#include<iostream>
using namespace std;


int main() {
    
    int i = 1;

    do {
        cout << i << " ";
        i++;
    }while(i <= 5);
    cout << endl;

    // Diff in while and do - while loop

    int val = 1;
    while (val > 5) {
        cout << "Apna college in while loop " << endl;
    }

    // cout << "While terminated \n";
    
    do{
        cout << "Apna college in do-while loop" << endl;
    }while(val > 5);
    // cout << "do-while terminated \n";
    cout << endl;
    return 0;
}
