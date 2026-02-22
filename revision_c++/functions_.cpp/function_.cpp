#include<iostream>
using namespace std ;
int minOfTwo( int a , int b ) {
    if( a>b){
        return b ;
    } else {
        return a ;
    }
}
int main(){
    int a = 3 ;
    int b = 2 ;

    cout << " min " << minOfTwo( a , b) << endl;

    return 0 ;
}