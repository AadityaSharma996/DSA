#include <iostream>
using namespace std;

void ReverseArr (int arr[], int sz) {
int start = 0, end = sz-1;
while (start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
}

}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int sz = 7;
    ReverseArr(arr, sz);

    for (int i = 0; i<7; i++){
        cout << arr[i] << endl;
    }
}