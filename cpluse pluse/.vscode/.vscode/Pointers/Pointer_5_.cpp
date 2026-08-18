

#include<iostream>
using namespace std ;
int main(){
    int a = 10 ;
    int* ptr = &a ;
    int** ptr2 = &ptr ;

    cout << "\n its the adderss of a = " << &a << endl;
    cout << " its the adderss of a which we stored in a pointer  = " << ptr << endl;
    cout << " its the value of poiter 1 which we store in pointer 2 = " << ptr2 << endl;

}