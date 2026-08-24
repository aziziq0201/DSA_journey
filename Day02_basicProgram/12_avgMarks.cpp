#include<iostream>
using namespace std;


int main() {
    int eng, sci, math;

    cout << "Enter marks of English Science Maths : ";
    cin >>eng>>sci>>math;
    cout<<endl;
    cout <<"Marks of English : " <<eng<< "\nMarks of Science : "<<sci << "\nMarks of Mathematics : "<<math<<endl;

    // for average either use float and divide with float
    cout << "Average marks : " << (eng+sci+math)/3.0 << endl;
    return 0;
}
