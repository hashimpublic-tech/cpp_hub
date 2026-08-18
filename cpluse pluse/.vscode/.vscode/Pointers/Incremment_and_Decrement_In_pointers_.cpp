#include<iostream>
using namespace std ; 
int main(){
    int a = 10 ;
    int* ptr = &a ;

    cout << ptr << endl;
    cout << *ptr << endl;
    ptr++ ;
    cout << " after increment : " << ptr << endl;  // +4 bytes in memory in the address of (a) ;
    

    return 0 ;
}