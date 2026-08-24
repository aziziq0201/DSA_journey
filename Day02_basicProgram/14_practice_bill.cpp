#include<iostream>
using namespace std;


int main() {
    float pencil, pen , eraser;
    cout << "Enter price of Pencil Pen and Eraser respectively : ";
    cin >>pencil>>pen>>eraser;

    cout << "Cost of Pencil : " << pencil <<endl;
    cout << "Cost of Pen : " << pen <<endl;
    cout << "Cost of Eraser : " << eraser <<endl;

    float total_cost = pencil + pen + eraser;
    cout <<endl<<endl << "Total Cost = " << total_cost << endl;
    
    float cost_with_GST = 1.18*total_cost;
    cout <<endl << "Total Cost with GST = " << cost_with_GST << endl;
    return 0;
}
