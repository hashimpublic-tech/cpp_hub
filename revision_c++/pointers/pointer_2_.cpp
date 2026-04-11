#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int *ptr = &a ;

    cout <<"address of a "<<  &a << endl;
    cout << "address of a stored in ptr : " << ptr << endl;
    cout << "own address of ptr : " << &ptr << endl;

    return 0 ;
}