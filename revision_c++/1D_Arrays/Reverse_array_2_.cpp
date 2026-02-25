#include<iostream>
using namespace std ;
void ReverseArray( int array[] , int size ){
    int start = 0 ;
    int end = size - 1 ;

    while( start < end ){
        swap( array[start] , array[end]) ;
        start++ ;
        end-- ;
    }
    for( int i=0 ; i<size ; i++ ){
        cout << array[i] << " " ;
    }
}
int main(){
    int array[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8} ;
    int size = 8 ;

    ReverseArray( array , size ) ;

    return 0 ;
}