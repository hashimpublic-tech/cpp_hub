#include<iostream>
using namespace std ;
void printPrime(  int n ){

    for( int i=2 ; i<=n ; i++ ){
        bool isprime = true ;

        for( int j=2 ; j<i ; j++ ){
            if( i%j == 0 ){
                isprime = false ;
            }
        }
        if( isprime == true ){
            cout << i << " is prime : " << endl;
        }
    }
}
int main(){
    int n = 15 ;

    printPrime(n) ;
    return 0 ;
}