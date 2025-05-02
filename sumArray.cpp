#include <iostream>
using namespace std;
    //  Question: Sum of All Elements
// Given an array of integers, write a program to return the sum of all the elements in the array.

int main(){
    int nums[] = {1, 2, 3, 4, 5}, size = 5, sumArray = 0;;
    for(int num : nums){
        sumArray += num;
    } 
    cout << sumArray << endl;
}