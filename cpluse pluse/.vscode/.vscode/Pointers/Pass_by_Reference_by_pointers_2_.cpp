

#include<iostream>
using namespace std ;
int changeA( int* a){
    *a = 15 ;

    return *a ;
}
int main(){
    int a = 10 ;

   cout <<  changeA( &a ) << endl;

   cout << " value of (a) in main : " << a << endl;
} 
