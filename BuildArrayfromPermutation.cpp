#include <iostream>
using namespace std;

int main(){
    vector<int> nums = {0,2,1,5,3,4};
    int n = nums.size();
    // cout << n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[nums[i]]);
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    

    cout<<endl;
}