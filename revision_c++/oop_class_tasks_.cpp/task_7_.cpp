#include<iostream>
using namespace std ;
void checkPrime( int n ){
    bool isprime = true ;

    for(int i=2 ; i<n ; i++){
        if( n%i == 0 ){
            isprime = false ;
            break ;
        }
    } 
    if( isprime == true ){
        cout <<  " prime : " << endl;
    } else {
         cout << " non prime : " << endl;
    }
}
int main(){
    int n ;

    cout << " enter number : " ;
    cin >> n ;

    checkPrime(n) ;

    return 0 ;
}