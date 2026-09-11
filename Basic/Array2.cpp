#include <iostream>
using namespace std;
int main()
{

    // Enter array daa manually

    int a = 5;
    int marks[a];

    for (int i = 0; i < a; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout << marks[i] << endl;
    }

    // To find the smallest value

    int nums[] = {10, 20, 3, -1, -15, 40};
    int size = 6;

    int smallest = INT16_MAX; //For smallest value
    int largest = INT16_MAX; //For largest value

    for (int i = 0; i < size; i++)
    {

        // if (nums[i] < smallest){
        //     smallest = nums [i];

        smallest = min(nums[i], smallest); //Min function
        largest = max(nums[i], smallest); //Max function
    }
    cout << "Smallest number is:" << smallest << endl;
    cout << "Largest number is:" << largest << endl;
}