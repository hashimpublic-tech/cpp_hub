// how a pointer store another pointer address :


#include<iostream>
using namespace std ;
int main(){
    int a = 100 ;
    int* ptr = &a ;
    int** ptr2 = &ptr ;

    cout << &a << endl;   // its the address of a :
    cout << ptr << endl;   // its the address of a which we stored in pointer 1 ;
    cout << &ptr << endl;     // its the address pointer 1 ;
    cout << ptr2 << endl;     // its the address of ptr 1  which we stored in pointer 2 ;

    return 0 ;
}
