#include<iostream>
using namespace std ;
int main(){
    int array[]={ 1 , 2 , 3 , 4, 5 } ;
    int a = 10 , b= 15 ;

   // array = &a  ;    wrong concept , becouse arrays is constant we cant pass a value to array :

   int* ptr = &a ; // we pass the address of a : but we can change the address in ptr :
   ptr = &b ;   // now we change  the stored address in ptr , the new address will be the ( b ) address : 

   cout << &a << endl;      // address of a 
   cout << ptr << endl;     // address of b.
}