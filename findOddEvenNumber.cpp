#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Type any number to check is it Odd or Even number ";
    cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << "Its Even Number\n";
    //     return 0;
    // }else {
    //     cout << "Its Odd Number\n";
    //     return 0;
    // }
    
    // Write same code in Trinary Statement

    cout << (n % 2 == 0? "Even Number\n": "Odd Number\n");
}