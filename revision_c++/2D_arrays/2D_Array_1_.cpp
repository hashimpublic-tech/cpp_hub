#include<iostream>
using namespace std ;
void Array( int array[][5] , int row , int colum ){
    for( int i=0 ; i<row; i++){
        for( int j=0 ; j<colum ; j++){
            cout << array[i][j] << " " ;
        }
        cout << endl;
    }
}
int main(){
    int array[3][5] = {{1 , 2 , 3 , 4 ,5} ,{5,6,7,8,9},{3,4,5,6,7}};
    int row = 3 ;
    int colum = 5 ;
    Array( array , row , colum );

    return 0;
}