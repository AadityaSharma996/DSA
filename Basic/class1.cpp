#include <iostream>
using namespace std;
int main() {
    int a = 4, b=8;
    cout << "Ans is:"<< endl;

    //BitWise Operators

    //AND Operator
    cout << (a & b) << endl;

    //OR Operator
    cout << (a | b) << endl;

    //XOR Operator
    cout << (a ^ b) << endl;

    //LeftShift Operator & RightShift Operator

    int n = 4, i = 1;

    //LeftShift Operator
    cout << (n<<i) << endl;

    //RightShift Operator
    cout << (n>>i) << endl;
}