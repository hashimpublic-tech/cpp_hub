#include<iostream>
using namespace std ;
int diagnalSum( int array[][4] , int row , int colum ){
    int diagSum = 0 ;

    for( int i=0 ; i<row ; i++){
        for( int j=0 ; j<colum ; j++){
            if( i==j){
                diagSum += array[i][j];
            } else if ( j == colum-1 - i ){
                diagSum += array[i][j] ;
            }
        }
    }
    return diagSum ;
}
int main(){
    
    int array[4][4] = {{1 , 2 , 3 , 4 } ,{5,6,7,9},{3,4,5,7} , { 2 ,3 , 6 ,8}};
    int row = 4 ;
    int colum = 4 ;

    cout << diagnalSum( array , row , colum ) ;
    return 0 ;
}