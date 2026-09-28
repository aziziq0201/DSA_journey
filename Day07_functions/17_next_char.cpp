/*
Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.
Eg : input = ‘c’, return value = ‘d’
Note : for ch = ‘z’, return ‘a’.
*/

#include<iostream>
using namespace std;

char next(char ch) {
    if(ch == 'z') {
        return 'a';
    }
    return  ch += 1;

}


int main() {
    for(int i = 1; i < 10; i++) {
        char x;
        cout << "Enter a char : ";
        cin >> x;

        cout << next(x) << endl;
    }
    return 0;
}
