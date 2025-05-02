#include <iostream>
#include <vector>
using namespace std;

int CountOutofStockProducts(const vector<int>& nums){
    int count = 0;
    for(int num : nums){
        if(num <= 0){
            count ++;
        }
    }
    return count;
}
int main(){
    vector<int> stock = {10, 0, 4, 0, 6};

    cout << CountOutofStockProducts(stock) << endl;
}