#include<iostream>
using namespace std ;
int main(){
    int n ;
    bool isfind = false ;
    int array[5];

    for( int i=0 ; i<5 ; i++ ){
        cout << " enter number for array : " ;
        cin >> array[i] ;
    }

    cout << "\nenter kay to be search : " ;
    cin >> n ;

    for( int i=0 ; i<5 ; i++ ){
        if( array[i] == n ){
            isfind = true ;
    }
}

      system( " cls ") ;

    if ( isfind == true ){
        cout << "\ntarget exist : \n" << endl;
    } else {
        cout << "\ntarget not exist : \n" << endl;
    }

}