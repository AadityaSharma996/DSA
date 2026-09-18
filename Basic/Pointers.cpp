#include <iostream>
#include <vector>
using namespace std;

// void changeA (int a){ //For pass by value
//     a = 20;
// }

// void changeA(int *ptr)
// { // For pass by reference by using pointer
//     *ptr = 20;
// }

// void changeA(int &b) //This is the alias of a i.e b
// { // For pass by reference by using alias
//     b = 20; //Giving the value to be that is to be updated in the main of a
// }

int main()
{

    // Memeory Address
    // int a = 10;
    // cout << &a << endl; //This is a Address Of Operator that helps us to get the address where our variable is stored in the memory

    // Pointers and can also do the same for float
    //  int a = 10;
    //  int* ptr = &a; //Creates a pointer that stores the address of a.

    // cout << ptr << endl; //Prints the address of a stored in pointer
    // cout << &a << endl; //Prints the address of a
    // cout << &ptr << endl; //Prints the address of pointer

    // Pointer to Pointer

    // int a = 10;
    // int* ptr = &a;

    // int** prnPtr = &ptr; //This is a pointer to pointer that stors the address of the other pointer

    // cout << &ptr << endl;
    // cout << prnPtr << endl; //Prints the add of pointer that is stored inside of other pointer

    // Dereference operator

    // int a = 10;
    // int* ptr = &a;

    // int** prnptr = &ptr;

    // cout << *(&a) << endl; //This helps us to get the value stored at the address of a
    // cout << *(ptr) << endl; //This will also print the value of a because the value of a is stored in ptr
    // cout << ptr << endl;
    // cout << *(prnptr) << endl; //Prints the add of pointer which is a as a address is stored in ptr
    // cout << **(prnptr) << endl; //Double dereferencing operator used to get the value stored on the last address i.e. 10

    // int** ptr = NULL; //To store the address 0 in the pointer so that there is no address value
    // cout << ptr << endl;

    // Predict Output
    //  int a = 5;
    //  int* p = &a;
    //  int** q = &p;

    // cout << *p << endl; //This will print the value stored in the add of a as it stores the add of a so the value stored
    // //in the address of a will be the output
    // cout << **q << endl; //This will also print the value of a as first it prints the add of p and then dereference it and
    // //get the add of p and through that address prints the value of a as the add will be of a
    // cout << p << endl; //This will print the address stored in p i.e the add of a
    // cout << *q << endl; //This will also print the address of a as first itll get its own add then dereference it and get
    // the address of p that contains the address of a

    // Pass by Value

    // int a = 10;

    // changeA (a);
    // cout << "The value of changedA is: " << a << endl; //This will still print 10 because right now it copies the value a
    // and still give the ans 10 this is pass by value but if we want to change the value of a to 20 we have to use pointer

    // So for the Pass by Reference

    // int a = 10;

    // changeA (&a);
    // cout << "The value of changedA is: " << a << endl; //This will give us the ans 20 as now we are not copying the value of a
    //in the ptr we are now copying the address of a in ptr and on that address the value i.e 20 will now be
    //updated in the main a and will give us the ans of 20 from the function value. This is pass by reference which directly
    //make changes in the main file

// int a = 10;

//     changeA (a);
//     cout << "The value of changedA is: " << a << endl; //This will now print the value of b as any change in b is direclty
    //reflected on a as well because b is the alias of a


    //For arr using pointers

    // int arr[] = {1,2,3,4,5};

    // cout << arr << endl; //This will print the address of array
    // cout << *arr << endl; //This will print the value stored at the 0th index of array i.e. 1
    // cout << *(arr+1) << endl; //This will print the next index value as itll moves from one step to the next index value
    // cout << *(arr+2) << endl;//Rest same for the other index values
    // cout << *(arr+3) << endl;
    // cout << *(arr+4) << endl;

    //For comapring the ptr
    //1. Less than
    // int* ptr3;
    // int* ptr4;

    // cout << ptr3 << endl;
    // cout << ptr4 << endl;

    // cout << (ptr3 < ptr4) << endl;

    //Equal to
    // int* ptr3;
    // int* ptr4 = ptr3;

    // cout << ptr3 << endl;
    // cout << ptr4 << endl;

    // cout << (ptr3 == ptr4) << endl;

    //Not equal to
    // int* ptr3;
    // int* ptr4 = ptr3;

    // cout << ptr3 << endl;
    // cout << ptr4 << endl;

    // cout << (ptr3 != ptr4) << endl;


    // int* ptr2; //Address of pointer
    // int* ptr1 = ptr2 + 2; //Increase its size by 2 integer
    // cout << ptr1 - ptr2 << endl; //To get the number of bytes that are present between ptr1 and ptr2 by subtracting
    //which will give as 2 because if ptr2 has 100 then ptr will be 108 and by subtracting both we get 2 integer value


    // int a = 10;
    // int* ptr = &a;

    // cout << ptr << endl; //This will print the address of a
    // ptr++; //This will increase its integer size by 1
    // ptr --; //This will decrease its integer size by 1 i.e by 4 bytes

    // ptr = ptr + 2; //This will increase the integer size by 8 bytes

    // cout << ptr << endl; //This will print the address of a but its size will be increased by 1 integer i.e. by 4 bytes


    //Predict Output
    int arr[] = {10,20,30,40};
    int* ptr = arr;

    cout << * (ptr + 1) << endl; //Increment by 1 index value i.e 20
    cout << * (ptr + 3) << endl; //Increment by 3 index values i.e 40
    ptr++;
    cout << * ptr << endl; //Increment by 1 index value i.e 20
}