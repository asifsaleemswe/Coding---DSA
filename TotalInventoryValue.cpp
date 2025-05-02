#include <iostream>
#include <vector>
using namespace std;

int TotalInventoryValue(vector<int> prices, vector<int> quantities){
    int totalValue = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        totalValue += prices[i] * quantities[i];
    }
    
    return totalValue;
}
int main(){
    vector<int> prices = {100, 200, 150, 80};  // price of each product  
    vector<int> quantities = {2, 0, 5, 3};    // quantity of each product

    cout << TotalInventoryValue(prices, quantities) << endl;


}