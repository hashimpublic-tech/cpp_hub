#include<iostream>
using namespace std ;
int main(){
    int sum = 0 ;
    int n = 10 ;
    int i = 1 ;

    while( i <= n ){
        if( i % 2 != 0 ) {
            sum += i ;
        }
        i++ ;  
    }
    cout << sum << endl;
    
    return 0 ;
}