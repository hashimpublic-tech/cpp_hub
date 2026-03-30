#include<iostream>
using namespace std ;
int print(int n){
    
    if(n==1){
      return n ;
    }
    cout << n <<" " ;

    return print(n-1);
}
int main(){
    cout << print(10);
}