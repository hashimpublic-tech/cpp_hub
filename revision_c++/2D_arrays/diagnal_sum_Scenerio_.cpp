#include<iostream>
using namespace std ;
int diagnalSum(int array[][4] , int n ){
    int diagSum = 0 ;
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            if( i==j){
                diagSum += array[i][j] ;
            } else if ( j == n-i-1 ){
                diagSum += array[i][j] ;
            }
        }
    }
    return diagSum ;
}
int main(){
    
    int array[4][4] = {{1 , 2 , 3 , 4 } ,{5,6,7,9},{3,4,5,7} , { 2 ,3 , 6 ,8}};
    int n = 4 ;

    cout << diagnalSum( array , n ) << endl;

    return 0 ;
}