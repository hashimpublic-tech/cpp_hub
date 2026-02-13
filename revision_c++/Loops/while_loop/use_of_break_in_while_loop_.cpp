#include<iostream>
using namespace std ;
int main()
{
    int n = 10 ;
    int i = 1 ;
    int sum = 0 ;

    while( i <= n ){
        sum += i ;
        i++ ;
        if( i == 6 ){
            break ;
        } 
    }
    cout << sum << endl;
    return 0 ;
}