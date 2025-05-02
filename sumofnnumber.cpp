#include <iostream>
using namespace std;

int main(){
    //define veriables
    int n = 55, count = 1, sum = 0;
    // check the condition if number is not less then 1
   if (n >= count)
   {
        while (n >= count)
        {
            /* code */
        sum = sum + count;
        count = count + 1;
        }
    cout << sum <<endl;
   }else{
    cout << "invalid" <<endl;
   }
    return 0;
}