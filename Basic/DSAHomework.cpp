#include <iostream>
using namespace std;
int main() {

    //To figure out how to find if a number is a power of 2 without any loop.
    int n = 16;

    while ( n > 1 && n % 2 == 0){
        n = n >> 1;
    }
    
    if ( n == 1) {
        cout << "Power of 2" << endl;
    } else {
        cout << "Not a Power of 2" << endl;
    }

    //WAF to reverse an integer n.

    int i = 12345;
    int rev = 0;

    while ( i > 0) {
        int digit = i % 10;
        rev = rev * 10 + digit;
        i /= 10;

    }

    cout << rev << endl;
}