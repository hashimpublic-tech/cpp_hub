#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int* ptr1 = &a ;
    int** ptr2 = &ptr1 ;


    cout << "add of a : " << &a << endl;
    cout << "add of a : " << ptr1 << endl;
    cout << "value of a : " << *(ptr1) << endl;
    cout << "add of a : " << *(ptr2) << endl; 
    cout << "Value of a : " << **(ptr2) << endl;
    
    return 0;
 }