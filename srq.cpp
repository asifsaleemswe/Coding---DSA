#include <iostream>
using namespace std;

int main(){
    int x = 9, low = 1, high = x, ans = 1;
    while (low <= high)
    {
        lobng long mid = (low + high)/2;
        if (mid * mid <= x)
        {
            ans = mid;
            low = mid +1;
        }else {
            high = mid -1;
        }
        
    }
    cout << ans;
    



    cout << endl;
}