#include <iostream>
using namespace std;
int main() {

    //Operator Precendence

    int a = 5, b = 2, c = 6;

    cout << ( a - b * c) << endl;
    cout << ( (a - b) * c) << endl;

    int x = 4, y = 5, z = 2;
    cout << ( x * y % z) << endl;
}