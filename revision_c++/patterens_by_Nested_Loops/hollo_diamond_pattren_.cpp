#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;

    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n-i ; j++ ){
            cout << " " << " " ;
        }
        cout << "*" ;
  
        for( int h=1 ; h<i+1 ; h++ ){
            cout << " " << " " ;
        }
        for( int a=1 ; a<i+1 ; a++ ){
            cout << " " << " " ;
        }
        cout << "*" << endl;
    }
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<i+1 ; j++ ){
            cout << " " << " " ;
        }
        cout <<"*" ;

        for( int h=1 ; h<n-i ; h++ ){
            cout << " " << " " ;
        }
        for( int a=1 ; a<n-i ; a++ ){
            cout << " " << " " ;
        }
        cout << "*" << endl;
    }   
}
