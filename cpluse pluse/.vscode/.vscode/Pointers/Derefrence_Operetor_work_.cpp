

#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int* ptr = &a ;
    int** ptr2 = &ptr ;

    cout << " address of a = " << &a << endl;
    cout << " value store in a =  " << *(&a) << endl;
    cout << " address of a  store in ptr = " <<  ptr << endl;
    cout << "  the value in adress store in ptr = " << *(ptr) << endl;
    cout << " the address of pointer ptr = " << ptr2 << endl;
    cout << " the value of a store in ponter1 (ptr) = " << **(ptr2) << endl;
    cout << "  the address of a store in pointer1 (ptr) = " << *( ptr2) << endl;
    cout << " the address of pointer1 (ptr) that we stored in ptr2 = " << *(&ptr2) << endl;

    return 0 ;

}