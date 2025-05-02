#include <iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int power = 1;
    int decNum = 0;
    while (n > 0)
    {
       int lastDig = n % 10;
    //    n = n / 10;
       // -------- //
       decNum += lastDig * power;
       power = power *2;
       n = n / 10;
       
       
    }
    cout << decNum << endl;
   
    
   
    
}

void decToBin(int decNum){
   int n = decNum;
    int binNum = 0;
    int power = 1;
   while (n > 0)
   {
        int remd = n % 2;
        binNum += remd * power;
        n = n/ 2;
        power = power * 10;

        
       
   }
   
   cout << binNum << endl;
}

int main(){
    // binToDec(10110);
    decToBin(4);
}