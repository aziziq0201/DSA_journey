#include<iostream>
using namespace std;


int main() {
    
    int day = 3;

    // if(day == 1) cout << "Monday " << endl;
    // else if(day == 2) cout << "Tuesday " << endl;
    // else if(day == 3) cout << "Wednesday " << endl;
    // else if(day == 4) cout << "Thursday " << endl;
    // else if(day == 5) cout << "Friday " << endl;
    // else if(day == 6) cout << "Saturday " << endl;
    // else cout << "Sunday " << endl;



    switch(day) {
        case 1 : 
            cout << "Monday" << endl;
            break;
        
        case 2 : 
            cout << "Tuesday" << endl;
            break;
        
        case 3 : 
            cout << "Wednesday" << endl;
            break;
        
        case 4 : 
            cout << "Thursday" << endl;
            break;
        
        case 5 : 
            cout << "Friday" << endl;
            break;
        
        case 6 : 
            cout << "Saturday" << endl;
            break;
        
        case 7 : 
            cout << "Sunday" << endl;
            break;
        
        default : 
            cout << "Invalid Day " << endl;
        
    }

    return 0;
}
