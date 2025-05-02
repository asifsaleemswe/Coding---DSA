#include <iostream>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 4};
    int n = nums.size();
    // int digit = nums[0];
    for (int i = 0; i < n; i++)
    {
        int digit = nums[i];
        if (nums[i] == nums[i+1])
        {
            cout << "True";
        }else{
            cout << "False";
        }
    }
    


    cout << endl;
    // cout<<nums[0];
}