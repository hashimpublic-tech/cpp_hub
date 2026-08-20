#include<iostream>
using namespace std ;
int func( int array[] , int size ){
    for( int i=0 ; i<size ; i++ ){
        array[i] = 2 * array[i] ;
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 };
    int size = 5 ;

    func( array , size ) ;

    for( int i=0 ; i<size ; i++ ){
        cout << array[i] << endl;
    }
    return 0 ;
}