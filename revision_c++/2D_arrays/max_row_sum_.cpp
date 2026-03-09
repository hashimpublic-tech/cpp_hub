#include<iostream>
using namespace std ;
int maxRow( int array[][5] , int row , int colum  ){
    int sum = 0 ;
    for( int i=0 ; i<row ; i++)
    {
        int rowSum = 0 ;
        for( int j=0 ; j<colum ; j++)
        {
            rowSum+=array[i][j];
            // if( rowSum > sum  ){
            //     sum = rowSum ;
            // }
        }
        sum = max( rowSum , sum);
    }
    return sum ;
}
int main(){
    int array[3][5] = {{1 , 2 , 3 , 4 ,5} ,{5,6,7,8,3},{3,4,5,6,7}};
    int row = 3 ;
    int colum = 5 ;

    cout << maxRow( array , row , colum ) ;
    
}