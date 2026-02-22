#include<iostream>
using namespace std ;
int digSum( int num ){
    int digitSum = 0 ;
    int reminder = 0 ;

    while( num > 0 ){
        reminder = num%10 ;
        num = num/10 ;
        digitSum += reminder ;
    }
    return digitSum ;
}
int main(){
   // int num = 145 ;

    cout << digSum( 145 ) << endl ;
    cout << digSum( 146 ) << endl ;
    cout << digSum( 147 ) << endl ;
    cout << digSum( 148 ) << endl ;
    cout << digSum( 149 ) << endl ;


    return 0 ;
}