#include<iostream>
using namespace std ;
void checkPrime( int n ){
    bool isprime = false ;

    for( int i=2 ; i<n ; i++ ){
        if( n%i == 0 ){
            isprime = true ;
            break ;
        }
    }
    if( isprime == true ){
        cout << ": non prime  :" << endl;
    } else {
        cout << ": prime :" << endl;
    }
}
int main(){
    int n ;

    
    while(true){
    cout << " enter number : " ;
    cin >> n ;
    system( " cls ") ;
    checkPrime(n) ;
    }
   
    return 0 ;
}