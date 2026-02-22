#include<iostream>
using namespace std ;
int function( int a , int b ){
    a=a+10 ;
    b=b+10 ;

    int sum = a+b ;

    return sum ;
}
int main(){
    int a = 4 ;
    int b = 5 ;

    cout << function( a,b) << endl;

    cout << a << endl;
    cout << b << endl;
    return 0 ;
}
