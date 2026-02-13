#include<iostream>
using namespace std ;
int main(){
    bool isPrime = false ;

    int n = 10 ;

    for( int i = 2 ; i <= n-1 ; i++ ){
        if ( n%i == 0 ){
            isPrime = true ;
            break ;
        }
    }
    if ( isPrime == true ){
        cout << "\n number is non prime : " << endl;
    } else {
        cout << "\n number is  prime : " << endl;
    }
    return 0 ;
}