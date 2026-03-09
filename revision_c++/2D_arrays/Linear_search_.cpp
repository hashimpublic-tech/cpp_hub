#include<iostream>
using namespace std ;
bool linearSearch( int array[][5] , int row , int colum , int key){
    for( int i=0 ; i<row ; i++){
        for( int j=0 ; j<colum ; j++){
            if( array[i][j] == key){
                return true ;
            }
        }
    }
    return false ;
}
int main(){
    int array[3][5] = {{1 , 2 , 3 , 4 ,5} ,{5,6,7,8,3},{3,4,5,6,7}};
    int row = 3 ;
    int colum = 5 ;
    int key = 3 ;
    cout << linearSearch(array , row , colum , key ) ;

}