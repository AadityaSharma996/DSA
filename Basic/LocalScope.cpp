#include <iostream>
using namespace std;
int main() {

    //Scope
    // Local Scope
    if ( 3 > 1) {

        int x = 10;
    } else {

        int x = 10;
    }

    cout << x << endl; // This will give error as x is declared inside if else and calling x outside if else will not work

    //Similarly for loop

    for (int i=0; i<10; i++)
    {

    }

    cout << i << endl;
}