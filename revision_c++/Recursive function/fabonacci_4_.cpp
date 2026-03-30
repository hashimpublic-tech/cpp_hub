#include<iostream>
using namespace std ;
int fabo(int n ){
    if(n==0 || n==1){
        return n ;
    }

    return fabo(n-2) + fabo(n-1) ;
}
int main(){
   
    for(int i=0 ; i<10 ; i++ ){
        cout << fabo(i) << " " ;
    }
    return 0 ;
}