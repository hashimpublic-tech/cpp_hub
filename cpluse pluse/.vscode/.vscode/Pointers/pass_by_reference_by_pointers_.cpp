// how can we do pass by value with the help of pointers :


#include<iostream>
using namespace std ;
void changA( int* a ){
    *a = 20 ;
}
int main(){
    int a = 10 ;
    changA( &a ) ;
    
    cout << " value in main is : " << a << endl;

    return 0 ;
}