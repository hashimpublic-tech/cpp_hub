#include<iostream>
using namespace std ;
int add( int a , int b ){
    return a+b ;
}
int product( int a , int b){
    return a*b ;
}
double divide( double a , double b){
    return a/b ;
}
int subtract( int a , int b){
    return a-b ;
}


int main(){
    int a = 6 ;
    int b = 2 ;

    cout << "sum : " << add( a ,b ) << endl;
    cout << "multiply : " << product( a ,b ) << endl;
    cout << "divide : " << divide( a, b) << endl;
    cout << "subtract : " << subtract( a , b )<< endl;

    return 0 ;
}