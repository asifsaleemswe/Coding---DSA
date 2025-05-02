#include <iostream>
using namespace std;

// // Pass by referrence using Pointers
// int changeA(int *ptr){
//     *ptr = 30;
//     return *ptr;
// }
// Pass by referrence using Reference Veriable
void multipleBy2(int &a, int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int changeA(int &ref){
    ref = 30;
    return ref;
}
int main(){
    // int x;
    // int *ptr;
    // x = 7;
    // ptr = &x;
    // cout<< *ptr;
    // int *ptr = &a;
    // cout << changeA(a) << endl;

    // cout << "a memory location = " << &a << endl;
    // cout << "ptr memory location = " << &ptr << endl;
    // cout << "Value of ptr = " << *ptr << endl; 

    // *ptr = 20;
    // cout << "Value of a = " << a << endl;
    // cout << "Value of ptr after update ptr= " << *ptr << endl;

    // int x = 1, y = 2, z = 3;
    // multipleBy2(x, y, z);
    // cout<< x << y << z <<endl;
    // return 0;
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << " , " << ch << endl;
}