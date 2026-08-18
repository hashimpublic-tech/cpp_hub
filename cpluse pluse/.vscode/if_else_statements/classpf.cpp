/*#include<iostream>
using namespace std ;
int main(){
   int sum = 0 ;
   int n ;

   cout << " enter number to check from 1-n  even numbers : " << endl;
   cin >> n ;

   for(int i = 1 ; i <= n ; i++){
      if(i%2 == 0 ){
         cout << " its a even number : " << i << endl;
         sum+=i;
      } 
      } cout << " its the sum of current 1-n : " << sum << endl;


   return 0 ; 
}*/






/*#include<iostream>
using namespace std ;
int main(){
   bool isprime = true ;
   int n ;

   cout << " enter a number to check isprime : " << endl;
   cin >> n ;

   for(int i = 2 ; i <= n-1 ; i++){
      if (n%i==0){
         isprime = false ;
         break;
      } 
      
      }
   
   if(isprime==false){
      cout << " its a non prime : "<< n  << endl;
   }else{
      cout << " its a prime number : " << n << endl;
   }
   return 0 ;

   

}*/


//****************find prime numbers ***************** */


/*#include<iostream>
using namespace std ;
int main(){
   bool isPrime = true ;
   int n = 8 ;
   for(int i = 2 ; i <= n-1 ; i++ ) {
      if(n%i == 0 ) {
         isPrime = false ;
         break ;
      }
   }
   if (isPrime == true){
      cout << " number is prime : " << n << endl;
   } else  { 
      cout << " number is non prime : "  << n << endl;
   }return 0 ; 

}*/


//**********sum of 1-n numbers which is divisible on 3 ***************** */


/*#include<iostream>
using namespace std ;
int main(){
   int n ;
   int sum = 0 ;

   cout << " enter a number : " << endl;
   cin >> n ;

   for (int i = 1 ; i <= n ; i++ ){
      if(i%3 == 0 ){
         cout << " its a number divisebal by 3 : " << i << endl;
         sum+=i;
      }
   }cout << " its sum of 1-n diviseble by 3 numbers : " << sum << endl;
   return 0 ;
}  */



//*******FACTORIAL OF NUMBER***************** */




/*#include<iostream>
using namespace std ;
int main(){
   int n ;
   int product = 1 ;
   

   cout<< " enter a number to find factorial : " << endl;
   cin >> n ;
   
   for(int i = 1 ;i <= n ; i++  ){
      cout  << i << endl;
      product = product* i ;

   }cout << " factoral of current numbers : " << product << endl;
   
   return 0 ;
 }
*/


//********** NESTED LOOPS ******************** */


/*#include<iostream>
using namespace std ; 
int main (){
   int n = 10 ;
   
   for ( int i = 1 ; i <= n ; i++ ){ 
      int m = 100; 
      for( int j = 1 ; j <= m ; j++ ){
         cout << "*" ;
      }  cout << endl;
      
   }
   return 0 ;
}*/





/*#include<iostream> 
using namespace std ;
int main(){
    int n = 10;
    for(int i = 1 ; i<=n ; i++){
      int m = 50 ;
      for ( int j = 1 ; j<=m ; j++){
         cout << "*";
      }cout << endl;
      
    }return 0 ;

}*/






