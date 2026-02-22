#include<iostream>
using namespace std ;
int factorial( int n ){
    int fact = 1 ;

    for( int i=1 ; i<=n ; i++ ){
        fact*=i ;
    }
    return fact ;
}
int main(){
    cout << " factorial: " << factorial(5) << endl;
    cout << " factorial: " << factorial(6) << endl;
    cout << " factorial: " << factorial(7) << endl;
    cout << " factorial: " << factorial(4) << endl;

    return 0 ;
}