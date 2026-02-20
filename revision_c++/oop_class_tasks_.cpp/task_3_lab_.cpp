#include<iostream>
using namespace std ;
int main(){
    int array[5] ;

    for( int i=0 ; i<5 ; i++ ){
        cout << " enter  number : " ;
        cin >> array[i] ;  
    }
    cout << "\n" ;

    for( int i=0 ;i<5 ; i++ ){
        if( array[i] % 2 == 0){
            cout << "number " << i+1 << " is even " << endl;
        }
        else {
            cout << "number " << i+1 << " is odd "  << endl;
        }
    }
    return 0 ;

}