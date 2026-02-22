#include<iostream>
using namespace std ;
int returnValue(){
    cout << " Hello world : " << endl;

    return 3 ;
}
int main(){
   int val = returnValue() ;

   cout << " val : " << val << endl;

   return 0 ;
}