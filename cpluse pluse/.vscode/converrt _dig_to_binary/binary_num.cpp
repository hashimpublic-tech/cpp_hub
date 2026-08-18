
// How to find the digits binary form ;

/*

#include<iostream>
using namespace std ;
int main(){
    int number = 50 ;
    int ans = 0 ;
    int remender ;
    int power = 1 ;

    while ( number > 0 ){
        remender = number % 2 ;
        number /= 2 ;

        ans += remender*power ;
        power*=10 ;
    }
    cout << ans << endl;
}*/


/************************** */


#include<iostream>
using namespace std ;
int main(){
    int bin = 110 ;
    int lastdig ;
    int ans = 0 ;
    int power = 1 ;

    while ( bin > 0 ) {
     lastdig = bin % 10 ;
     ans+= lastdig * power ;

     bin /= 10 ;
     power = power * 2 ;
 
    }
    cout << ans << endl;
}
