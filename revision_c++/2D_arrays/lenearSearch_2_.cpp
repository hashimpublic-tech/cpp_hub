#include<iostream>
using namespace std ;
pair<int , int >linearSearch( int array[][5] , int row , int colum , int key){
    for( int i=0 ; i<row ; i++ ){
        for( int j=0 ; j<colum ; j++ ){
            if( array[i][j] == key){
                return { i , j} ;
            }
        }
    }
    return {-1 ,-1} ;
}
int main(){

    int array[3][5] = {{1 , 2 , 3 , 4 ,5} ,{5,6,7,8,9},{3,4,5,6,7}};
    int row = 3 ;
    int colum = 5 ;
    int key = 6;

    pair<int,int>result = linearSearch( array , row , colum , key ) ;

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}