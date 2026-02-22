#include<iostream>
using namespace std ;
int function( int a , int b ){
    int sum = a+b ;
    return sum ;
}
int main(){
    int a=2 ;
    int b=3 ;

    cout << function( a,b) << endl;
    return 0 ; 
}