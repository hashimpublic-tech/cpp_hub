#include<iostream>
using namespace std ;
int main(){
    int array[6] ;

    cout <<" assign value to array : " ;
    for( int i=0 ; i<6 ; i++ ){
        cin >> array[i] ;
    }
    
    for( int i=0 ; i<6 ; i++ ){
        if( array[i] == 2 ){
            cout << " target exist : " << i << endl;
        }
        else {
            cout << " target not exist : " << endl;
        }
    }
    return 0 ;

}