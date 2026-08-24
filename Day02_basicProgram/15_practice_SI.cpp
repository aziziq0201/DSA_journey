#include<iostream>
using namespace std;


int main() {
    int principal;
    float rate;
    int time;
    
    cout << "Enter Principal , Rate, Time respectively : ";
    cin>>principal>>rate>>time;
    cout << "\nSimple Interest : " << (principal*rate*time)/100 << endl;
    return 0;
}
