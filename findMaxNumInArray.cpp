#include <iostream>
#include <vector>
using namespace std;
// Find the Maximum Element in an Array
// Given an array of integers, write a program to find and return the largest number in the array.
// Using Function
int findMaxNumInArray(vector<int> nums){
    int largestNum = nums[0];
    for(int num : nums){
        if(num > largestNum){
            largestNum = num;
        }
    }
    return largestNum;
}
int main(){
    vector<int> nums = {3, 7, 2, 9, 4};

    cout << findMaxNumInArray(nums) << endl;
}