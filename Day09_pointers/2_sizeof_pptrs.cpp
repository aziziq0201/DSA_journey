#include <iostream>
using namespace std;

int main() {
    char c = 'Z';
    
    char *ptr = &c;         // Points to char
    char **pptr = &ptr;     // Points to char*
    char ***ppptr = &pptr;  // Points to char**
    
    // Sizes are identical
    cout << "Size of char*   = " << sizeof(ptr) << " bytes\n";  // 8
    cout << "Size of char**  = " << sizeof(pptr) << " bytes\n"; // 8
    cout << "Size of char*** = " << sizeof(ppptr) << " bytes\n"; // 8
    
    // Accessing the original value using triple dereferencing
    cout << "Value of c using ***ppptr = " << ***ppptr << "\n";
    
    return 0;
}
