#include<iostream>
using namespace std ;
int maxColumSum( int array[][4] , int row , int colum ){
    int maxRow = 0 ;
    for( int j=0 ; j<colum ; j++){
        int sum =0 ;
        for( int i=0 ; i<row ; i++){
            sum+=array[i][j] ;
            if( sum > maxRow){
                maxRow = sum ;
            }
        }
    }
    return maxRow ;
} 
int main(){
    int array[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,6}};
    int row = 3 ;
    int colum = 4 ;

    cout << maxColumSum( array , row , colum ) << endl;

    return 0 ;
}