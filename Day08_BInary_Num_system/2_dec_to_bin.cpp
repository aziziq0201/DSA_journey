#include<iostream>
using namespace std;

void decToBin(int decNum) {
    int binNum = 0;
    int power = 1;
    while(decNum) {
        binNum += (decNum%2)*power; 
        power *= 10;
        decNum /= 2;
    }
    cout << binNum << endl;
}

int main() {
    decToBin(18);
    decToBin(10);
    decToBin(5);
    decToBin(15);
    decToBin(14);
    decToBin(7);
    decToBin(4);
    return 0;
}
