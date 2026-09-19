#include <iostream>
#include <vector>
using namespace std;

//Recursive BinarySearch
// int recBinarySearch(vector<int> arr, int tar, int st, int end)
// {
//     if (st <= end)
//     {
//         int mid = st + (end - st) / 2;
//         if (tar > arr[mid])
//         { // 2nd Half
//             return recBinarySearch(arr, tar, mid + 1, end);
//         }
//         else if (tar < arr[mid])
//         { // 1st Half
//             return recBinarySearch(arr, tar, st, mid - 1);
//         }
//         else
//         { // mid => ans
//             return mid;
//         }
//     }
//     return -1;
// }

// For BinarySearch

int binarySearch(vector<int> arr, int tar){
    int st=0, end = arr.size()-1;

    while (st <= end){
        // int mid = (st + end) / 2 ; //This is not so optimised becasue for large index values it can overflow and can give
        // wrong mid value do to solve this problem we use

        int mid = st + (end-st) / 2; //This is the most optimised solution for this problem

        if (tar > arr[mid]){
            st = mid + 1;
        } else if (tar < arr [mid]){
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;

}

int main()
{

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int tar1 = 12;

    // cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; // Even
    int tar2 = 0;

    cout << binarySearch(arr2, tar2) << endl;
}