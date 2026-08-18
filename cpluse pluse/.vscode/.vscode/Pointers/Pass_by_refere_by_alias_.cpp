#include<iostream>
using namespace std ;
int changeA( int &a ){
     a = 20 ;

    return a ;
}
int main(){
    int a = 10 ;

    cout <<"\n value of a in function : " <<  changeA( a ) << endl; 

    cout << " value of a in main : " << a << endl;

    return 0 ;
}