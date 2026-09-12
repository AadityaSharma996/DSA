#include <iostream>
#include <vector> //To use vector in program we use vector headerfile
using namespace std;
int main (){
    //vector<int> vec = {1,2,3}; //Syantx of vector
    //cout << vec [0] << endl; //Printing the 0th index value of vector

    // vector<int> vec (5,0); //Giving size in first and the index value in second
    // cout << vec [0] << endl;
    // cout << vec [1] << endl;
    // cout << vec [2] << endl;
    // cout << vec [3] << endl;
    // cout << vec [4] << endl;

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // cout << "size = " << vec.size() << endl;

    vector<int> vec;
    //cout << "size = " << vec.size() << endl;

    vec.push_back(25); //To enter a value in an empty vector
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);

    cout << vec.size() << endl; //To print the size i.e number of elements in vector 
    cout << vec.capacity() << endl; //To print the capacity i.e space to store the elements in vector

    //vec.pop_back();
    // cout << "After push back size = " << vec.size() << endl;

    
    // vec.pop_back(); //To remove the last element of vector
    // cout << vec.front() << endl; //To print the first element of vector
    // cout << vec.back() << endl; //To print the last element of vector
    // cout << vec.at(0) << endl; //To get the index value

    // for(int val: vec){ //For each loop it shows the index value and it's data type must match the vector data type
    //    cout << val << endl;
    //}
    
}