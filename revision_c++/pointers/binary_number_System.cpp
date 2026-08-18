#include<iostream>
using namespace std ;
int main(){
    int decNum = 50 ;
    int power = 1 ;
    int ans = 0 ;


    while (decNum > 0){
        
        int remender = decNum % 2 ;
        decNum = decNum / 2;
        ans += (remender*power) ;
        power*=10 ;
       
    }
    cout << ans << endl;
    return 0 ;
}