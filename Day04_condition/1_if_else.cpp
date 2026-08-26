#include<iostream>
using namespace std;


int main() {
    int age;
    cout <<"Enter age : ";
    cin >> age;
    if(age >= 18) 
        cout << "Can vote" << endl;
    else 
        cout << "Can't vote" << endl;

        
    if(age < 13) cout << "Minor age " << endl;
    else if( age >= 13 && age <= 19) cout << "Teen age " << endl;
    else if( age >19 && age < 60) cout << "Adult age " << endl;
    else cout << "Senior Citizen " << endl;
    return 0;
}
