/*#include<iostream>
using namespace std ;
void print(){
   cout << " Hello , hashim Khan : " << endl;
}
int main(){
                                        // nothing will print untill dont call function 
   return 0 ;
}*/





/*********************************************** */


/*#include<iostream>
using namespace std ;
 void print(){
   cout << " hello ,  this is hashim : " << endl;

 }
 int main(){
   print();
   print();
   print();
   print();
   print();
 }

*/



/****************************** */


/*#include<iostream>
using namespace std ;
int func(){
   cout << " hello , hashim khan : " << endl;
   return 7 ;
}
int main()
{
   int val = func();
   func();
   func();
   func();
   func();
   func();
   
   cout << " val = " << val << endl;
   return 0 ;
}*/




/******************************** */




// how a function working : 


/*#include<iostream>
using namespace std ;

void func(){
    cout << " hello world , this is hashim khan : " << endl; 
 }
 int main(){
    func() ;
    func() ;
    func() ;
    func() ;
    func() ;
    
 }*/ 

 /****************************************** */


/*#include<iostream>
using namespace std ;
int func(){
   cout << " hello , hashim khan : " << endl;
   return 3 ;

}
int main(){
   int val = func();
   func();
   func();
   func();
   func();
   func();

   cout << " val : " << val << endl;
   return 0 ;

}


*/

/***************************************** */



/*#include<iostream>
using namespace std ;
int sum( int n ) {
   int sum = 0 ;
   for( int i = 1 ; i <= n ; i++){
      sum+=i ;
   }
   return sum ;
}int main(){
   int n ;

   cout << " sum is = : " << sum( 5) << endl; 
    cout << " sum is = : " << sum( 3 ) << endl;
     cout << " sum is = : " << sum( 2 ) << endl;
      cout << " sum is = : " << sum( 5 ) << endl;
       cout << " sum is = : " << sum( 6 ) << endl;
        cout << " sum is = : " << sum( 7 ) << endl;

   return 0 ;
}
*/

/************************************* */

// how to calculate the sum of digit of number : 
 


/*#include<iostream>
using namespace std ;
int digitsum( int num ){
   int digsum = 0 ;
   int lastdig;

   while( num > 0 ){
      lastdig = num % 10 ;
      num /= 10 ;

      digsum+=lastdig ;
   }
   return digsum ;
}
int main(){
   int num ;
   cout << " enter number to find digsum : " << endl;
   cin >> num ;

   cout << " digit sum is : " << digitsum( num ) << endl;
   return 0 ;
}

*/

/************************************* */



// calculate n factorial :


/*#include<iostream>
using namespace std ;
int factorial( int n )
{
   int fact = 1 ;
   for ( int i = 1 ; i <= n ; i++ ){
      fact*=i ;
   }
   cout << " factorial of " << n << " is " ;
   return fact ;
}
int main(){
   int n ;
   cout << factorial(4) << endl;
   return 0 ;
}*/

/************************************* */

// how to find nCr of a number ;
// mea boinomial factorial : 


/*#include<iostream>
using namespace std ;
int factorial( int n )
{
   int fact = 1 ;

   for ( int i = 1 ; i <= n ; i++ ){

      fact*=i ;
   }
   return fact ;
}
int nCr( int n , int r )
{
   int fact_n = factorial( n ) ;
   int fact_r = factorial ( r ) ;
   int fact_nmr = factorial( n-r ) ;

   return  fact_n / ( fact_r  * fact_nmr ) ; 
}
int main(){
   int n , r ;
   cout << " enetr value for n : " << endl;
   cin >> n ;
   cout << " enter value for r : " << endl;
   cin >> r ;

   cout << " the boinomial factorial of " << n << "!" << " " << r << "! :   " << nCr( n , r ) << endl;

   return 0 ;
}
*/

/************************************* */

// create a function to check number is prime or not : 



/*#include<iostream>
using namespace std ;
int checkPrime( int num )
{
   bool isprime = true ;

    cout << " enter number to check prime or not : " << endl;
   cin >> num ;

   for( int i = 2 ; i < num - 1 ; i++ ) {
      if( num%i == 0)
      {
         isprime = false ;
         break ;
      }
   }
   if ( isprime == true ){
      cout << " number is prime : " << endl;
   } else {
      cout << " number is non prime : " << endl;
   }
   return isprime ;

}
int main(){
   int num ;
  
   checkPrime( num ) ;
}

*/





/********************************** */






/*#include<iostream>
using namespace std ;
int sum( int a , int b ){
   int s = a+b ;
   return s ;
}
int main(){
   cout << sum( 2 , 4 ) ;
}*/

/*********************************************** */


/*#include<iostream>
using namespace std ;

   double sum( double a , double b ){
      double s =  a + b ;
      return s ;
   
}

int main(){
   cout << sum(4.29 , 3.23) << endl;
   return 0;
}*/


/******************************************* */



/*#include<iostream>
using namespace std ; 
int minOfTwo( int a , int b ){
   if( a < b ){
      return a ;
   } else {
      return b ;
   } 
}
int main(){
   cout << " min number is : " << minOfTwo( 7 , 5  ) << endl;
   cout << " min number is : " << minOfTwo( 2 , 7  ) << endl;
   cout << " min number is : " << minOfTwo( 9 , 8  ) << endl;
   cout << " min number is : " << minOfTwo( 7 , 3  ) << endl;
   cout << " min number is : " << minOfTwo( 3 , 8  ) << endl;

   return 0 ;
}
*/

/******************************************* */

  
/*#include<iostream> 
using namespace std ;
int sum(int n){


   int sum = 0 ;
   for( int i = 1 ; i <= n ; i++ ){
      cout <<" n : " << i << endl;
      sum+=i ; 

   }
   cout << " sum of n is : "  ;
   return sum ;
}
int main(){
   int n ;

      cout << " enter a number : " << endl;
   cin >> n ;

   cout << sum(n)<< endl;
   return 0 ;
   
}*/


/*********************************************** */


/*
#include<iostream>
using namespace std ;
int fact( int n ) {

   int factorial = 1 ;
   for( int i = 1 ; i <= n ; i++  ){
      factorial*=i ;

   }
   cout << " factorial of n is : " ;
   return factorial ;
}
int main(){

   int n ;

   cout << " enter a number to find their factorial : " << endl;
   cin >> n ;

   cout << fact( n ) << endl;
   return 0;

}
   */


   /*************************************************** */

   // pass by value : 

   /*#include<iostream>
   using namespace std ;
   int sum( int a , int b ){
      a = a + 10 ;
      b = b + 10 ;

      return ( a + b ) ;
   }
   int main(){
      int a = 5 ;
      int b = 4 ;
      cout << sum( a , b ) << endl;

      cout << a << endl;
      cout << b << endl;

      return 0 ;
   }


*/



/************************************************************** */



/*#include<iostream>
using namespace std ;
int primeprint( int n )
{
   for( int i = 2 ; i < n ;i++ ){
      if( n%i != 0){
         cout <<" prime : " << n << endl;
      }
   }
}
int main(){
   int n ;
   cout << " enter a number " << endl;
   cin >> n ;
   primeprint( n ) ;
   return 0;
}*/











/*
#include<iostream>
using namespace std ; 
int sum( int a , int b ){
   return ( a+b ) ;
}
int main(){
   cout << sum( 2 , 3 ) << endl;
   cout << sum( 4 , 6 ) << endl;
   cout << sum( 5 , 8 ) << endl;
   cout << sum( 8 , 8 ) << endl;
   cout << sum( 9 , 2 ) << endl;
   return 0 ;
}

*/

/********************************** */

 /*#include<iostream>
 using namespace std ;

 int func(){
    cout << " hello world ,  this is hashim khan : " << endl;
    return 5 ;
 }
 int main() {
    int val = func();
    cout << " val = " << val << endl;

    return 0 ;
 }*/


 /********************************************** */

// how can we make a function to do sum of two numbers : 
 

 /*#include<iostream>
 using namespace std ;

 int sum(int a , int b ) {
    int s = a + b ;
    return s ;
 }

 int main(){
    cout << sum(8 , 10 ) << endl;
    return 0 ;
 }
*/


/********************************************** */


// how can we make a function to check which one is greater digit :  :


/*#include<iostream>
using namespace std ;
int num( int a , int b ) {
    if (a > b ) {
        return a ;
    } else {
        return b ;
    } }

    int main(){
        cout <<num( 6 , 9 ) << " is greater : " <<  endl;
    return 0 ;}
*/



/*********************************************** */ 

/*#include<iostream>
using namespace std ;

int sum( int a , int b ){
   int s = a + b ;
   return s ;
}
int main(){
     cout << " sum : " << sum( 9 , 7 ) << endl;
     return 0 ;
}*/


/************************************************* */


// function in double datatype : 

/*#include<iostream>
using namespace std ;
double sum( double a , double b  ){
   double s = a+ b ;
   return s  ;
}

int main(){
   cout << sum(2.45 , 9.32) ;
   return 0 ;
}*/


/*************************************************** */


// how to find the min of two numbers in functions :  


/*#include<iostream>
using namespace std ;

int min(int a , int b ) {  // parameters : which value we make in a function like( int a , int b ) : 
   if (a < b ){
      return a ;
   } else {
      return b ;
   }

}

int main(){
   cout << min(8 , 9 ) << " is smaller : " << endl; // arguments : which value we are pass like ( 8 , 9 ) :
   return 0;
}*/



/***************************************************** */

// how can we make a function to calculate the sum of 1 - n : 


/*#include<iostream>
using namespace std ;

int sum(int n ){
   int sum = 0 ;
   for(int i = 1 ; i <= n ; i++ ){
      sum += i ;
} return sum ;
   } 

   int main(){
      cout << sum(5) << endl;
      cout << sum(10) << endl;
      return 0 ;
   }
  
  */



  /********************************************************* */

// make a function to calculate the factoral of n :  


  /*#include<iostream>
  using namespace std ;

  int fact( int n ) {
   int fact = 1  ;

   for(int i = 1 ; i <= n ; i++){
      fact*=i ;
   }
   return fact ;
  }
  int main(){
   cout << "its the fact of number 5 : " << fact(5) << endl;
   cout <<"its the fact of number 10 : " << fact(10) << endl;
   cout <<"its the fact of number 3 : " << fact(3) << endl;
   cout << "its the fact of number 2 : " <<fact(2) << endl;
   cout << "its the fact of number 7 : " <<fact(7) << endl;
   return 0 ;
  }*/


  /*************************************** */

  // how to make a function to do subtraction : 
 

  /*#include<iostream>
  using namespace std ;

  int func(int a , int b ) {
   int s = a - b ;
   return s ;
  }

  int main(){
   cout << func(3 ,1) << endl;
   cout << func(8 ,7) << endl;
   cout << func(9 ,5) << endl;
   cout << func(6 ,4) << endl;
   cout << func(5 ,5) << endl;
   cout << func(4 ,2) << endl;
   return 0;
  }

*/



/***************************** */
//  pass by value :
/***************************** */



// how pass by value works : 


/*#include<iostream>
using namespace std ;

int sum(int a , int b ) {
   a = a*2 ;
   b = b*2 ;
   return (a+b);
}
int main(){
  int a = 15 , b = 10 ;
  cout << sum(a , b) << endl ;

  cout << a <<endl;
  cout << b << endl;
  return 0 ;
}


*/
/********************************************** */


// how can we make a function to print even numbers from 1 - n :

/*#include<iostream>
using namespace std ;

int even(int n ) {
   for(int i = 0 ; i < n ;i++){
      if(i%2 == 0){
         cout << i << " " ;
      }
} 
   }

int main(){
   cout << even(20) << endl;
    cout << even(24) << endl;
     cout << even(30) << endl;
      cout << even(40) << endl;
   return 0;
}*/



/********************************************* */


//Scenario:
//Write a function that prints
//Hello, Welcome to C++ Programming!


/*#include<iostream>
using namespace std ;

void func(){
   cout << " hello , wellcome this is a c++ program : " << endl;
   
}
int main(){
   func() ;
   func() ;
   func() ;
   func() ;
   func() ;
   
}
*/


/*************************************************** */



//Scenario:
//Create a function that prints
//****************
//(16 stars)


/*#include<iostream>
using namespace std ;

void star(){
   cout << "**************** "<< endl;
}
int main(){
   star();
   star();
   star();
   star();
   star();
}*/


/***************************************************** */


//Scenario:
//Create a function that adds 10 and 20 and returns the result.


/*#include<iostream>
using namespace std ;

int sum( int a , int b ){
   return (a+b);
}
int main(){
   cout << sum(10 ,20 ) << endl;
   return 0 ;
}
*/


/********************************************************** */


//Scenario:
//Write a function that returns the square of 5.
 


/*#include<iostream>
using namespace std ;

int square(int n ){
   return (n*n);
}
int main(){
   cout << square(5) << endl;
   cout << square(6) << endl;
   cout << square(7) << endl;
   cout << square(8) << endl;
   return 0;
}*/


/***************************************************** */

// write a function to check the number from 1 - n even numbers and print : 
 

/*#include<iostream>
using namespace std ;
int even(int n ){
   for(int i = 1 ; i <= n ; i++){
      if(i%2==0){
         cout << " its a even number : " << i << endl;
         
      }
   }
} int main(){
   cout << even(10) << endl;
   cout << even(20) << endl;
   cout << even(30) << endl;
   cout << even(22) << endl;
   cout << even(42) << endl;
   return 0;
}
*/


/********************************************* */


// write a function to print greater number :  


/*#include<iostream>
using namespace std ;
int max( int a  , int b  ){
   if(a > b ){
      return a ;
   }else {
      return b ;
   }
    
    

} int main(){
   
   cout << max(22 , 23) << endl ;
return 0 ;}

*/


//************************************************************** */


/*#include<iostream>
using namespace std ;
 int area(int len , int wid){
    
   cout << " total area is : " << len * wid << endl;
   return 0  ;
    
}
int main(){
   int len , wid ;
   cout << " enter len : "  << endl;
   cin >> len ;
   cout << " enter wid : " << endl;
   cin >> wid ;

   cout << area(len , wid ) << endl;
   return 0 ;
}
*/


/****************************************************************** */


// write a function to check age is greater or less then 18 : 

/*#include<iostream>
using namespace std ;
int func( int a ){
   if( a >=18 ){
      cout << " eligibal for vote : " << endl;
   }else {
      cout <<" not eligibal : " << endl;
   }
   return a ;
 
}
int main(){
   int age ;
   
      cout << " enter your age : " << endl;
   cin >> age ;

   cout <<func(age) << endl;
   

   return 0 ;
}

*/




/********************************************************** */



/*#include<iostream>
using namespace std ;
int main(){
   int hotel[4][6]={{1 , 0 , 1 , 1 , 0 ,0}, {1, 0 , 1 , 0 , 0 ,1 } , {1, 1 , 1 ,1 ,1 ,1} ,{ 1 , 0 , 0 , 0  , 1 , 1}};
   int occupied = 0 ;
   int vacant = 0 ;
   
   

   cout << "*** :  1 will occupied and 0 for vacant : ***" << endl;

   for(int i = 0 ; i < 4 ; i++ ){

      int occupied = 0 ;
      int vacant = 0 ;
      bool fullyOcc = true ;

      cout << "\n ***** floor  "<< i+1 << "***** \n"  << endl;
      

      for(int j = 0 ; j < 6 ; j++ ) {

         cout << " rooms  on " << i+1 << " floor is : *  " << hotel[i][j]  << endl;

         if(hotel[i][j] == 1 ) {
            occupied++ ;
              }else{
                vacant++ ;
                 fullyOcc = false ;
         }
      } 
      
      if(fullyOcc == true ){
            cout << "\n*** floor " << i+1 << " is fully occupied :  ***" << endl;
         }
         cout << " occupid rooms "  << " : " << occupied << endl;
         cout << " vacant rooms  " <<  " : " << vacant << endl;

         
         
   } 
   return 0 ;
}



*/



/********************************************************************* */


// how to calculate sum of  number of  digits  :


/*#include<iostream>
using namespace std ;

int digitsum( int num ){
   int digsum = 0 ;
   int lastdig ;

   while( num > 0 ){
      lastdig = num % 10 ;
      num/=10 ;

      digsum+=lastdig ;
   }
   return digsum ;
}


int main(){

   cout << " sum : " << digitsum( 2342 ) << endl;
    cout << " sum : " << digitsum( 6574) << endl;
     cout << " sum : " << digitsum( 6432 ) << endl;
      cout << " sum : " << digitsum( 3456 ) << endl;
       cout << " sum : " << digitsum( 9877 ) << endl;
   return 0 ;
}

*/




/************************************************** */



/*
#include<iostream>
using namespace std ;
int digitSum( int num ){
   int lastDig ;
   int digitSum = 0 ;

   while( num > 0 ){
      lastDig = num % 10 ;
      num = num / 10 ; 

      digitSum+=lastDig ;
   }
   return digitSum ;

}

int main(){
   cout << " sum :  " << digitSum( 2334 ) << endl;
      cout << " sum :  " << digitSum( 4533) << endl;
         cout << " sum :  " << digitSum( 7655 ) << endl;
            cout << " sum :  " << digitSum( 9843 ) << endl;
               cout << " sum :  " << digitSum( 2564 ) << endl;
   return 0 ;
}
   */


   /********************************************* */


   /*#include<iostream>
   using namespace std ;
   int digitSum( int num ){
      int lastDig ;
      int digSum = 0 ;

      while( num > 0 ){
         lastDig = num % 10 ;
         num = num / 10 ;
         
         digSum += lastDig ;
      }
      return digSum ;

   }

   int main(){
      cout << " sum : " << digitSum(2345) << endl;
      return 0 ;
   }

*/




/***************************************** */


   // how to find nCr factorial :


   /*#include<iostream>
   using namespace std ;

   int factorial(int n )
   {
      int fact = 1 ;

      for( int i = 1 ; i <= n ; i++ ) 
      {
         fact *= i ;
      }
      return fact ;

   }
   int printFact( int n , int r )
   {
      int fact_n = factorial( n ) ;
      int fact_r = factorial( r ) ;
      int fact_nmr = factorial( n-r ) ;

      return fact_n / ( fact_r * fact_nmr ) ;

   }
   int main()
   {
      int n = 8 , r = 2 ;

      cout << " boinomial factorial of " << n << "!  and " << r <<"!  " << " is " << printFact( n , r )  << endl;
      return 0 ;
   }

*/ 



/********************************************* */

// how to calculate sum of digits of the numbers : 


/*#include<iostream>
using namespace std ;
int digitSum( int num  )
{
   int digSum = 0 ;
   int lastdig ; 

   while( num > 0  ) 
   {
      lastdig = num % 10 ;
      num /= 10 ;

      digSum += lastdig ;

   }
   return digSum ;
}
int main ()
{
    cout << " sum : " << digitSum( 23445 ) << endl;
     cout << " sum : " << digitSum( 2654 ) << endl;
      cout << " sum : " << digitSum( 2985 ) << endl;
       cout << " sum : " << digitSum( 20983 ) << endl;
   
   return 0 ;
}*/


/*********************************************** */


/*#include<iostream>
using namespace std ;
int digitSum( int num )
{
   int lastDigit ;
   int digSum = 0 ;

   while ( num > 0  )
   {
      lastDigit = num % 10 ;
      num = num / 10 ;

      digSum += lastDigit ;
   }
   return digSum ;
}
int main()
{
   cout << " sum : " << digitSum( 2324) << endl;
    cout << " sum : " << digitSum( 8766) << endl;
     cout << " sum : " << digitSum( 8454) << endl;
      cout << " sum : " << digitSum( 9824) << endl;

   return 0 ;
}*/


/********************************************** */


/*
#include<iostream> 
using namespace std ;
int factorial( int num )
{
   int fact = 1 ;
   for( int i = 1 ; i <= num ; i++ )
   {
      fact = fact * i ;
   }
   return fact ;
}

int print_nCr( int n , int r )
{
   int fact_n = factorial( n ) ;
   int fact_r = factorial( r ) ;
   int fact_nmr = factorial( n-r );

   return fact_n / ( fact_r * fact_nmr ) ;

}
int nain(){
   cout << " nCr : " << print_nCr( 8 , 2 ) << endl;
   return 0 ;
}
   */


   /************************************************* */

  


 /*  #include<iostream>
using namespace std ;
void adminLogIn()
{
    string username = " hashim " ;
    string password =  " 67360 " ;
    string  name ;
    int choice , attempts , number  ;

    cout << " :=== Log IN Admin===: " << endl;
    while( attempts < 5 )
    {
        cout << " * Enter UserName : " << endl;
        getline( cin , username ) ;
        cout << " * Enter password : " << endl;
        getline( cin , password ) ;

        if( username == " hashim " && password == " 67360 ")
        {
            cout << " * Account Is Successfully Log In : " << endl;

            do{
                cout << " 1 . ** Create New Account : " << endl;
                cout << " 2 . ** View Account Details : " << endl;
                cout << " 3 . ** Exit : " << endl;
                
                cout << " ** Enter Choice : " << endl;
                cin >> choice ;

                if( choice == 1 ){
                    cout << " * Lets Create A New Account : \n\n" ;
                    cout << " Enter userName : " << endl ;
                    getline( cin , username ) ;
                    cout << " Enter Email Or Number : " << endl;
                    cin >> number ;
                    cin.ignore() ;
                    cout << " Use A Strong Password , Enter Password : " << endl;
                    getline( cin , password ) ;
                    cout << "\n" ;
                    cout << " Account Successfully Created : " << endl;
                    break;
                }else if ( choice == 2 ){
                    cout << " *** Lets View Account Details *** " << endl;
                    cout << " * Account username : " << username << endl;
                    cout << " * Account password :  " << password << endl;
                    break ; 
                } else if ( choice == 3 ){
                    cout << "*** Exite : ***" << endl;
                    break ;
                } else {
                    cout << " Invalid Input : " << endl;
                    break ;
                }
            }while( choice != 5  ) ;
                return ;

        } else {
            attempts++ ;
            cout << " invalid address , attempts left  " << ( 5 - attempts ) << endl;
        }
        
    }
    cout << " Account block , Becouse Of Many Wrong Attempts : " << endl;

}*/

/******************************************* */


/*#include<iostream>
using namespace std ;
void prime( int num ) 
{
   bool isprime = true ;

  for( int i = 2 ; i < num ; i++ ){
   if( num%i == 0 )
   {
      isprime = false ;
      break ;
   }
  }
  if( isprime == true )
  {
   cout << " number is prime : " << endl;
  }
  else {
   cout << " number is non prime : " << endl;
  }

} 
int main (){
   int num ;
   cout << " enter number : " << endl;
   cin >> num ;

   prime ( num ) ;
   return 0 ;
}
*/



/**************************************************************** */




/*#include<iostream>
using namespace std ;
int decToBinary( int num ){
   int ans = 0 ;
   int remender ;
   int power = 1 ;

   while ( num > 0 ){
      remender =  num % 2 ;
      num = num / 2 ;

      ans += remender * power ;
      power = power * 10 ;
   }
   return ans ;
}
int main(){
   cout << decToBinary( 50 ) << endl ;
}

*/



/********************************************* */



#include<iostream>
using namespace std ;

   int BinaryToDec( int num ){
      int lastDig ;
      int power = 1 ;
      int ans = 0 ;

      while( num > 0 ){
         lastDig = num % 10 ;
         num = num / 10 ;

         ans += lastDig * power ;
         power *= 2 ;
      }
 return ans ;
   }
  
int main(){
   cout << BinaryToDec( 110010 ) << endl;
   return 0 ;
}

