#include <iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int target){ //Giving the array , size and target to the funcion parameters
    for (int i=0; i<sz; i++) {
        if( arr [i] == target){ //If the value is in arr and matches the target value
            return i; //Return the index of the target value
        }
    }
    return -1; //Return -1 if the target value dont exist in the array
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = 7;
    int target = 7;
    //int target = 70; //Return -1 as the target value dont exist in the array

    cout << LinearSearch(arr, sz, target) << endl; //Output of the target index value

}