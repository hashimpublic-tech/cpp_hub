// how a ponter save the address of another variable :


#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int* ptr = &a ;

    cout << &a << endl;    // the address of a variable :
    cout << ptr << endl;   // they both will print same adress becouse we pass the address of a to pointer :
    cout << &ptr << endl;  // now will print the pointer itself address in memory :

    return 0 ;
}