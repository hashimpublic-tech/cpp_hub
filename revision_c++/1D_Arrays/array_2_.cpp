#include<iostream>
using namespace std ;
int main(){
    int array[6] ;
    int target = 3 ;
    bool isfind = false ;

    cout << " assign values to array : " << endl;
    for( int i=0 ; i<6 ; i++ ){
        cin >> array[i] ;
    }
    for( int j=0 ; j<6 ; j++ ){
        if( array[j] == target ){
            target = array[j] ;
            isfind = true ;
            break ;
        }
    }
    if( isfind == true ){
        cout << " target found : " << target << endl;
    } else {
        cout << " target not found :  " << endl;
    }
    return 0 ;
}