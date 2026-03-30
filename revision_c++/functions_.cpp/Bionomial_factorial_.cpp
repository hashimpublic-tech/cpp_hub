#include<iostream>
using namespace std ;
int factorial( int n ){
    int fact = 1 ;
    for(int i=1 ; i<=n ; i++ ){
        fact*=i ;
    }
    return fact ;
}
int nCr( int n , int r ){
    int n_factorial = factorial(n) ;
    int r_factorial = factorial(r) ;
    int nmr_factorial = factorial(n-r) ;

    return n_factorial / (r_factorial * nmr_factorial );
}
int main(){
    int n  ;
    int r ;

    cout << "Enter n : " ;
    cin >> n ;
    cout << "Enter r : " ;
    cin >> r ; 

    cout << "Result = " << nCr( n , r  ) ;

    return 0 ;
}