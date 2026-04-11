#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int* ptr = &a ;
    int** ptr2 = &ptr ;
    int** ptr3 = &ptr ;

    cout << &a << endl; // address of a 
    cout << ptr << endl; // address of a 
    cout << &ptr << endl; // address of ptr 
    cout << ptr2 << endl; // address of ptr 
    cout << &ptr2 << endl; // address of ptr2
    cout << ptr3 << endl;

    return 0 ;
}