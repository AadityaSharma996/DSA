#include <iostream>
#include <vector>
using namespace std;
    // vector<int> pairSum(vector<int> nums, int target){ //To return the values
    //     vector<int> ans; //Return the ans
    //     int n = nums.size(); //Size of the vector

    //     for (int i=0; i<n; i++){ //First value to check the target
    //         for (int j=i+1; j<n; j++){ //Second value to check the target by move +1 i
    //             if (nums[i] + nums[j] == target){ //To check if the sum of i and j are equal to target
    //                 ans.push_back(i); //To get the index value of i
    //                 ans.push_back(j); //To get the index value of j
    //                 return ans; //To get the final ans
    //             }
    //         }
    //     }
    // }



    vector<int> pairSum(vector<int> nums, int target){
        vector<int> ans;
        int n = nums.size();

        int i = 0, j = n-1; 

        while (i<j) {
            int pairSum = nums [i] + nums [j];
            if (pairSum>target){ //Using if else if condition to compare the values of i and j i.e pairSum with the target
                j--;
            } else if (pairSum<target) { //to get the index values that satisfy the target value
                i++;
            } else {
                ans.push_back(i);
                ans.push_back(j);
                return ans; //This time the time complexity of this problem is O(n) using the 2 pointer approach
            }
        }
    }



//This is not the most optimal solution because its time complexity is O(n^2). So to get the optimal time complexity i.e O(n)
//of this problem we use the 2 Pointer approach

int main() {
    vector<int> nums = {2,7,11,15}; //Vector containing elements
    int target = 26; //Target to be achieved by i and j

    vector<int> ans = pairSum(nums, target); //Calling the function to get the ans
    cout << ans [0] << "," << ans [1] << endl; //Getting the output of the index values that completes the target condition
}