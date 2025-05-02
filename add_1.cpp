#include <iostream>
using namespace std;

int main(){
    int digits[3] = {2, 9, 9};
    int n = sizeof(digits) / sizeof(int);
    int firstDigit = digits[0];
    int lastDigits = digits[n-1];
    // cout << lastDigits << endl;
    int fin = 0;
    for(int i = 0; i < n; i++){
    //    cout << digits[i];
        if (digits[n-1])
        {
            fin = firstDigit + 1;
            cout << fin;
        }
        
    }
}