#include <iostream>
#include <vector>
using namespace std;

int howManyTimesNumberAppear(vector<int> nums, int target){
    int count = 0;
    for(int num : nums){
        if(target == num){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1, 2, 3, 2, 4, 2, 2, 3, -2};
    int target = 2;
    cout << howManyTimesNumberAppear(nums, target) << endl;
}