#include <iostream>
#include <vector>
using namespace std;
void sortt(vector<int>& nums, int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            // cout << nums[j];
            if (nums[j] < nums[minIndex])
            {
            //    return swap(nums[i],nums[j]);
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}

int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int n = nums.size();
    // sort(nums);
    sortt(nums, n);
   
for (int i = 0; i < n; i++)
{
    cout << nums[i] <<",";
}


    cout << endl;
    
}