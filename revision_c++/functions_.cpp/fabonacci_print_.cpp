#include<iostream>
using namespace std ;
int printFabbo( int n ){
    if( n==0 || n==1){
        return n ;
    }
    return printFabbo( n-2)+printFabbo(n-1) ;
} 
int main(){
    int n = 7 ;
    
    for( int i=0 ; i<n ; i++ ){
        cout << printFabbo(i) << " " ;
    }
    return 0 ;
}