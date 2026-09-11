#include <iostream>
using namespace std;

void changeArr(int arr[], int size){ //A array and its size
    cout << "in function\n";
    for (int i=0; i<size; i++){
        arr [i] = 2 * arr[i]; //double the value of array
    }
}

int main(){

    int arr []= {1,2,3};

    changeArr(arr,3); // arr and its size as 3

    cout << "in main\n";

    for (int i=0; i<3; i++){

        cout << arr[i] << " "; //Print the elemnts of arr itll be 2 4 6 as its multiplied by the function using the PBR
    }
    cout << endl;

}