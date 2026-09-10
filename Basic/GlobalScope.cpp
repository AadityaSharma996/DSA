#include <iostream>
using namespace std;

// Global Scope
int x = 10;
void fun(){
    cout << x << endl;
}
int main() {

    fun();
    cout << x << endl;

}