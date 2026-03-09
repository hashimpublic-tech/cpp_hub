#include<iostream>
using namespace std ;
int diagnalSum(int array[][4] , int n){
    int diagSum = 0 ;
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            if(i==j){
                diagSum += array[i][j] ;
            } else if ( j== n-1-i){
                diagSum += array[i][j] ;
            }
        }
    }
     return diagSum ;
}
int main(){
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4 ;

    cout << diagnalSum( array , n ) ;
    return 0 ;
}