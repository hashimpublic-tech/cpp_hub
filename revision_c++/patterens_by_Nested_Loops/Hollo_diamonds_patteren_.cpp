#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;

    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n-i ; j++ ){
            cout << " " << " " ;
        }
        for( int h=0 ; h<1 ; h++  ){
            cout << "*" << " " ;
        }
        for( int a=1 ; a<i+1 ; a++ ){
            cout << " " << " " ;
        } 
        for( int s=1 ; s<i+1 ; s++ ){
            cout << " " << " " ;
        }
        for( int m=0 ; m<1 ; m++ ){
            cout << "*" << " " ;
        }
        cout << endl;
    }
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<i+1 ; j++ ){
            cout << " " << " " ;
        }
        for( int h=0 ; h<1 ; h++ ){
            cout << "*" << " " ;
        }
        for( int a=1 ; a<n-i ; a++ ){
            cout << " " << " " ;
        }
        for( int s=1 ; s<n-i ; s++ ){
            cout << " " << " " ;
        }
        for( int m=0 ; m<1 ; m++ ){
            cout << "*" << " " ;
        }
        cout << endl;
    }
}