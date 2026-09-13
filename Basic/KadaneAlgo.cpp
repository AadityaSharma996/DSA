#include <iostream>
using namespace std;
int main () {
    // int n = 5;
    // int arr[5] = {1,2,3,4,5}; //Array of 5 elements

    // for (int st=0; st<n; st++) { //To get the start value of subarray
    //     for (int end=st; end<n; end++){ //To get the end value of subarray
    //         for (int i=st; i<=end; i++){ //To get the st and end value of sub array in i
    //             cout << arr[i]; //Printing the value of subarray
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT16_MIN;

    for (int st=0; st<n; st++){
        int currentSum = 0;
        for (int end=st; end<n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "MaxSum is: " << maxSum << endl;
}