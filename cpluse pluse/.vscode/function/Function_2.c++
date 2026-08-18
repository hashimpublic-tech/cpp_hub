
// A student has 3 subjects.
// Create a function that:
// Takes marks of 3 subjects
// Calculates and returns the average marks 



/*
#include<iostream>
using namespace std ;
int average( int m1 , int m2 , int m3 )
{
   float avg ;
   avg = m1 + m2 + m3 ;
   return avg / 3 ;
}
int main()
{
   int m1 ,m2 ,m3 ;
   cout << " enter marks " << endl;
   cin >> m1 >> m2 >> m3 ;

   cout << " avg is : " << average( m1 , m2 , m3 ) << endl;

   return 0 ;
}
*/


//*** */
 

/*#include<iostream>
             using namespace std ;
             float average( int m1 , int m2 , int m3 )
             {
               float avg ;

               avg = m1 + m2 + m3 ;
               return avg / 3 ;

             }
             int main()
             {
               int m1 , m2  , m3 ;
               cout << " enter marks : " << endl;
               cin >> m1 >> m2 >> m3 ;

               cout << " avg : " << average( m1 , m2 , m3 ) << endl;
               
               return 0 ;
             }*/
   

 /******************* */

// Create a function that:
// Takes a number as parameter
// Checks whether the number is even or odd
// Prints the result



/*#include<iostream>
using namespace std ;
int evenOdd( int n )
{
   int even , odd ;
   if ( n % 2 == 0  )
   {
      cout<< " even "   ;
   } else {
      cout << " odd "  ;
   }
   return n ;

}
int main()
{
   int n ;
   cout << " enter number : " << endl;
   cin >> n ;

   cout << evenOdd( n ) << endl;
   return 0 ;
}*/


/***************************************** */

// Create a function that:
// Takes two numbers
// Returns their sum


/*#include<iostream>
using namespace std ; 
int sum( int n1 , int n2 )
{
   int sum = n1 + n2 ;

   return sum ;
}
int main()
{
   int n1 ,n2 ;
   cout << " enter numbers : " << endl;
   cin >> n1 >> n2 ;
   cout << " sum = " << sum(n1 ,n2 ) << endl;
   return 0 ;
}*/ 


/******************************* */

// Create a function named square() that:
// Takes one number
// Returns the square of that number


/*
#include<iostream>
using namespace std ;
int square(int num )
{
   return num*num ;
}
int main()
{
   int num ;

   cout << " enter a numver to find their square : " << endl;
   cin >> num ;

   cout << " square of " << num << " is : " << square( num ) << endl;
   return 0 ;
}

*/


/************************************* */


// A student attended some classes out of total classes.
// Create a function that:
// Takes attended classes and total classes
// Calculates and returns attendance percentage


/*#include<iostream>
using namespace std ;
float attendence( float totalclasses ,float attendclasses )
{
    
   return ( attendclasses / totalclasses ) *100 ; 
}
int main()
{
   float totalclasses , attendclasses ;
   cout << " enter attend classes : " << endl;
   cin >> attendclasses ;
   cout << " enter total classes : " << endl;
   cin >> totalclasses ;

   cout << " percentage of your attendence is : " << attendence( totalclasses , attendclasses ) <<"%" << endl;
   return 0 ;
}*/

/********* */



/*#include<iostream>
using namespace std ;
float percentage( float totalclasses , float attendclasses )
{
   cout << " enter total classes : " << endl;
   cin >> totalclasses ;
   cout << " enter attend classes : " << endl;
   cin >> attendclasses ;
   return ( attendclasses / totalclasses ) * 100 ;
}
int main()
{
   float totalclasses , attendclasses ;
   
   cout << " your percentage is : " << percentage( totalclasses , attendclasses  ) << endl;
   return 0 ;
}*/


/********************************* */

// Create functions to:
// Take marks of 5 subjects
// Calculate total marks
// Calculate percentage
// Display Grade
// A → ≥ 80
// B → ≥ 70
// C → ≥ 60
// Fail → < 60


/*#include<iostream>
using namespace std ;
int calNum( int m1 , int m2 , int m3 , int m4 , int m5 )
{
   return m1 + m2 + m3 + m4 + m5 ;
}
float markspercentage(  float marks ) 
{
   return ( marks / 500 ) * 100 ;
}
void mgrade( float percentage )
{
   if( percentage >= 80 )
   {
      cout << " you got grade A " << endl;
   } else if  ( percentage >= 70 ){
      cout << " you got grade B " << endl;
   } else if ( percentage >= 50 ){
      cout << " you got grade C : " << endl;
   } else {
      cout << " you got grade F : " << endl;
   }
}
int main(){
   int m1 , m2 , m3 , m4 , m5 ;
   int marks ;
   float percentage ;
   int grade ;

   cout << " enter marks : " << endl;
   cin >> m1 >> m2 >> m3 >> m4 >> m5 ;

   marks = calNum( m1 , m2 , m3 , m4 , m5 ) ;
   percentage = markspercentage( marks ) ;
    mgrade( percentage) ;

    cout << " marks : " << marks << endl;
    cout << " percentage : " << percentage << endl;

    return 0 ;
}*/



/******************************* */


// Create a function that:
// Takes current balance and withdraw amount
// Checks:
// If withdraw amount > balance → show error
// Else deduct amount and return remaining balance



/*#include<iostream>
using namespace std ;
int atm( int balance , int withdraw )
{
   if( withdraw > balance )
   {
      cout << " wrong input : Insufficient balance :  " << endl;
      return balance ;
   } else {
      cout<< " withdraw succesfull : " << withdraw << endl;
   return  balance-withdraw ;}
}

int main()
{
   int withdraw ;
   int balance ;
   cout << " enter balance : " << endl;
   cin >> balance ;
   cout << " enter  withdraw : " << endl;
   cin >> withdraw ;

   cout <<" current balance : " << atm( balance , withdraw ) << endl;
   

   return 0 ;
}
*/

/******************************************************* */

// A shop sells items.
// Create functions to:
// Calculate total price
// Apply discount:
// If total ≥ 5000 → 10% discount
// Else no discount

/*
#include<iostream>
using namespace std ;
int shop( int itemprice )
{
    
   int discount  ;
   int totalprice = 0 ;
   cout << " enter itam prize : " << endl;
   while( true )
   {
      cin >> itemprice ;
      if( itemprice == 0  )
      {
         break ;
      }
      totalprice += itemprice ;
   }
    cout << " total bill is : " << totalprice << endl;

   if( totalprice >= 5000 )
   {
       discount = totalprice * 0.10 ;
      cout << " you get 10% discount which is  : " ; 
   }
   
   return discount ;

   
} 
int main()
{
   int totalprice ;
   int itemprice ;
   int discount ;


   cout << shop( itemprice ) << endl;

   return 0 ;

   
}
*/



/********************************************* */



// Create functions to:
// Take basic salary
// Calculate:
// HRA = 20% of basic
// DA = 10% of basic



/*
 #include<iostream>
using namespace std ;

float salary( float basicsalary )
{
   float HRA ;
   float DA  ;
   
   HRA = basicsalary * 0.20 ;
   DA = basicsalary* 0.10 ;

   return   basicsalary + HRA + DA ;

}

int main()
{
   float basicsalary ;
   cout << " enter salary : " << endl;
   cin >> basicsalary ; 
   
   cout << " your gross salary is : " << salary(basicsalary ) << endl;
   return 0 ; 
}
   */


   /**************************************** */


   // A student has 3 subjects.
// Create a function that:
// Takes marks of 3 subjects
// Calculates and returns the average marks 



/*
#include<iostream>
using namespace std ;
int average( int m1 , int m2 , int m3 )
{
   cout << " enter mrks : " << endl;
   cin >> m1 >> m2 >> m3 ;
   
   float average ;
   average = m1 + m2 + m3 ;

   return average /3 ;
}
int main(){
   int m1 , m2 , m3 ;

   cout << " average : " << average( m1 , m2 , m3 ) << endl;
   return 0 ;
}
   */



   /*********************************** */
 



   //how to find max number with the help of functions :

   /*
   #include<iostream>
   using namespace std ;
   int maxNumber()
   {
      int max = 0 ;
      int array[5] = { 2 , 12 , 4 , 8 , 11 } ;

      for( int i = 0 ; i < 5 ; i++ ){
         if( array[i] > max ){
            max = array[i] ;
         }
      } return max ; 
   }
   int main(){
      cout << " max number : " << maxNumber()<< endl;
      return  0;
   }
*/


/******************************************** */

   //Scenario:
//Create a function that adds 10 and 20 and returns the result.

/*
#include<iostream>
using namespace std ;
int adds( int n1 , int n2 )
{
   int sum = n1 + n2 ;
   return sum ;
}
int main(){
   int n1 , n2 ;
   cout << " enter 2 numbers to find their sum  : " << endl;
   cin >> n1 >> n2 ;

   cout << " sum is = : " << adds( n1 , n2 ) << endl;
   return 0 ;
}
*/


/************************************************************ */

//Scenario:
//Write a function that returns the square of 5.
 


/*
#include<iostream>
using namespace std ;
int squareOfNum( int n ) 
{
   int square = n*n ;
   return square ;
}
int main(){
   int n ;
   cout << " enter a number to find their square : " << endl;
   cin >> n ;

   cout << " sum of " << n << " is : " << squareOfNum(n) << endl;
   return 0 ;
}
   */


   /**************************************** */


   // write a function to check the number from 1 - n even numbers and print : 


   /*#include<iostream>
   using namespace std ;
   int even( int n )
   {
     
      for( int i = 0 ; i < n ; i++ )
      {
         if( i % 2 == 0 )
         {
          cout << " its a even number : " << i << endl;
         }
      }
      
      
   }
   int main(){
      int n ;
      cout <<" enter a number to find all numbers  from 1 to n : " << endl;
      cin >> n ;

      cout <<  even( n ) << endl;
      return 0 ;
   }*/


   /************************************ */


   // write a function to print greater number :

   /*
   #include<iostream>
   using namespace std ;
   int maxx( int a , int b )
   {
      if ( a > b )
      {
         return a ;
      } else {
         return b ;
      }
   }
   int main(){
      int a , b ;
      cout << " enter 2 numbers to find which one is greater : " << endl;
      cin >> a >> b ;

      cout << " the greater one is : " << maxx( a , b ) << endl;
      return 0 ;
   }
      */


      /********************************* */


      // write a function to calculate the length and width of the area : 


      /*
      #include<iostream>
      using namespace std ;
      int calWidLen( int lenght , int width )
      {
         cout << " total arear is : " ;
         return lenght * width ;
      }
      int main(){
         int length , width ;
         cout << " enter length :  " << endl;
         cin >> length ;
         cout << " enter width :  " << endl;
         cin >> width ;
         
         cout << calWidLen( length , width ) << endl;
         return 0 ;
      }
         */

         /***************************************************** */


         // write a function to check age is greater or less then 18 : 


         /*#include<iostream>
         using namespace std ;
         void findAge( int age )
         {
            if( age >= 18 )
            {
               cout << " you are alegibal to vote : " << endl; ;
            } else {
               cout << " you are not aligibal to vote : " << endl;
            } 
          
         }
         int main(){
            int age ;
            cout << " enter age to find , are u aligibal to vote or not : " << endl;
            cin >> age ;

            findAge( age ) ;
            return 0 ;
         }
            */


            /************************************ */

            // how tocalculate sum of  number of  digits  :



           /*#include<iostream>
            using namespace std ;
            int digitSum( int num )
            {
               int lastDigit ;
               int digSum = 0 ;
               
               while( num > 0 ){

               lastDigit = num % 10 ;
               num = num / 10 ;

               digSum += lastDigit ;
               }
               return digSum ;

            }
            int main(){
               int num ;
               cout << " enter number to find their digit sum : " << endl;
               cin >> num ;
               
               cout << " digit sum = : " << digitSum( num ) << endl;
               return 0 ;
            }


         


*/

/************************************************************* */


/*
#include<iostream>
using namespace std ;
int digsum( int num ){
   int lastdig ;
   int digsum = 0 ;

   while( num > 0 )
   {
      lastdig = num % 10 ;
      num /= 10 ;

      digsum += lastdig ;
   }
   return digsum ;
}
int main(){
   int num ;
   cout << " enter number to find their digit sum : " << endl;
   cin >> num ;

   cout << " dig sum is : " << digsum( num ) << endl;
   return 0 ;
}

*/


/*********************************************** */


// how to find nCr factorial : 


/*
#include<iostream>
using namespace std ;
int factorial( int nValue )
{
   int fact = 1 ;
   for( int i = 1 ; i <= nValue ; i++ )
   {
      fact *= i ;
   }
   return fact ;
}
int nCr( int nValue , int rValue )
{
  int fact_n = factorial( nValue ) ;
  int fact_r = factorial( rValue ) ;
  int fact_nmr = factorial( nValue - rValue);
  
  return fact_n / ( fact_r * fact_nmr) ;

}
int main(){
   int nValue , rValue ;

   cout << " enter value for n : " << endl;
   cin >> nValue ;
   cout << " enter value for r : " << endl;
   cin >> rValue ;

   cout << " the boinomial factorial of numbers is : " << nCr( nValue , rValue ) << endl;
   return 0 ;
}
*/


/*************************************************** */



// Create functions to:
// Take marks of 5 subjects
// Calculate total marks
// Calculate percentage
// Display Grade
// A → ≥ 80
// B → ≥ 70
// C → ≥ 60
// Fail → < 60



/*
#include<iostream>
using namespace std ;

int marks( int m1 , int m2 , int m3 , int m4 , int m5 )
{
   
   return m1 + m2 + m3 + m4 + m5 ;
}
float percentag( float totalMarks)
{

   return ( totalMarks / 500 ) * 100 ;
}
float Grade( float percentage )
{
    if( percentage >= 80 ){
      cout << "  grade is ' A ' " << endl;
   } else if( percentage >= 70 ){
      cout << "  grade is ' B ' " << endl;
   } else if( percentage >= 60 ){
      cout << "  grade is ' C ' " << endl;
   } else if( percentage >= 50 ){
      cout << "  grade is ' D ' " << endl;
   } else {
      cout << " you are fail : " << endl ;
   }
  
}
int main(){
   float totalMarks ;
   float percentage ;
   int grade ;

   int m1 , m2 , m3 , m4 , m5 ;

   cout <<" enter marks : " << endl;
   cin >> m1 >> m2 >> m3 >> m4 >> m5 ;

   totalMarks = marks( m1 , m2 , m3 , m4 , m5 ) ;
   percentage = percentag( totalMarks );
   grade = Grade( percentage) ;

   cout << " marks : " << totalMarks << endl;
   cout << " percentage : " << percentage << endl;
   


   return 0 ;
}  


*/

/***************************************************** */


/*
#include<iostream>
using namespace std ;
int calmarks( int m1 , int m2 , int m3 , int m4 , int m5 )
{
   return m1 + m2 + m3 + m4 + m5 ;
}
float percentage( float marks )
{
   return ( marks / 500 ) * 100 ;
}
void Grade( float percent )
{
   if( percent >= 80 ){
      cout << " grade is A " << endl;
   } else if( percent >= 70 ){
      cout << " grade is B " << endl;
   } else if( percent >= 60 ){
      cout << " grade is C " << endl;
   } else if( percent >= 50 ){
      cout << " grade is D " << endl;
   } else {
      cout << " you are fail : " << endl;
   }
}
int main(){
   int m1 , m2 , m3 , m4 , m5 ;
   float marks ;
   float percent;
   int grade ;

   cout << " enter marks : " << endl;
   cin >> m1 >> m2 >> m3 >> m4 >> m5 ;

   marks = calmarks( m1 , m2 , m3 , m4 , m5 ) ;
   percent = percentage( marks ) ;
    Grade( percent ) ;

   cout << "marks :  " << marks << endl;
   cout << " percentage : " << percent << endl;

   return 0 ;
 }
   */

 /********************************************* */

// Create a function that:
// Takes current balance and withdraw amount
// Checks:
// If withdraw amount > balance → show error
// Else deduct amount and return remaining balance




/*
#include<iostream> 
using namespace std ;

float banking(   float  withdraw , float balance = 2000  )
{
   
   if( withdraw >= 0 && withdraw <= balance )
   {
      cout << " withdraw succesful * " << endl;
      return balance - withdraw ;
   } else {
      cout << " insuficient balance * " ;
      return balance ;
   }

}
int main(){
  float withdraw ;


   cout << " enter withdraw amount : " << endl;
   cin >> withdraw ;

   cout << " your current banalce is :  " << banking( withdraw   )  << endl;
   cout << " withdraw amount is : " << withdraw << endl;

   return 0 ;
}
*/

/******************************************* */



// Create a function that:
// Takes current balance and withdraw amount
// Checks:
// If withdraw amount > balance → show error
// Else deduct amount and return remaining balance


/*
#include<iostream>
using namespace std ;
float bankingsystem( float withdraw , float balance = 3000 )
{

   if( withdraw >= 0 && withdraw <= balance )
   {
      cout << " withdraw succesful : " << endl;
      return balance - withdraw ;
   } else {
      cout << " In sufficient balance : " ;
      return balance ;
   }
}
int main(){
   
   float withdraw ;

   cout << " enter withdraw amount : " << endl;
   cin >> withdraw ;

   cout << " your current balance is : " << bankingsystem( withdraw) << endl;
   cout << " withdraw amount is : " << withdraw << endl;

   return 0 ;
}

 */


 /******************************************* */


// Create a function that:
// Takes current balance and withdraw amount
// Checks:
// If withdraw amount > balance → show error
// Else deduct amount and return remaining balance


/*
#include<iostream>
using namespace std ;
int banking( float withdraw , float balance = 3000 )
{
   if( withdraw >= 0 && withdraw <= balance )
   {
      cout << " withdraw succesful : " << endl;
      return balance - withdraw ;
   } else {
      cout << " insuffeceint balance : " ;
      return balance ;
   }
}
int main(){
   int withdraw ;
   cout << " enter withdraw amount : " << endl;
   cin >> withdraw ;
   
    
   cout << " your current balance is : " << banking( withdraw ) << endl;
   cout << " withdraw amount is : " << withdraw << endl;
   return 0 ; } 
  */


/*************************************************** */

// A shop sells items.
// Create functions to:
// Calculate total price
// Apply discount:
// If total ≥ 5000 → 10% discount
// Else no discount
// Return final bill


  /*#include<iostream>
  using namespace std ;
  int shop(){
   int items ;
   int calItems = 0 ;
   float discount = 0;

   cout << " enter item prize : " << endl;
   while( items != 0 )
   {
      cin >> items ;

      calItems+=items ;
   }
   cout << " total bill is : " << calItems << endl;

   if( calItems >= 5000)
   {
      discount = calItems * 0.10 ;
      cout << "  COngratulations , you get 10 percent discount in bill  : ";
     return calItems - discount  ;
   } else {
      cout << " final bill : " ;
      return calItems ;
   }
  }
  int main(){
   int calItems ;
   float discount ;
   int items ;

   shop() ;
  }*/



  /************************************************** */


//   Create functions to:
// Take basic salary
// Calculate:
// HRA = 20% of basic
// DA = 10% of basic
//Return gross salary .
/********************************************* */


#include<iostream> 
using namespace std ;
void infinite(){
   int i =  1;
   while( true ){
      cout << "  infite loop working : " << i++ << " times " endl;
   }
}
int main(){
   infinite() ;

}




/*#include<iostream> 
using namespace std ;
void infinite(){
   int j = 0 ;
   for( int i = 1 ; i < i+1 ; i++ ) {
      cout << " infinite loop working  " << j++ << " times " << endl;
   }
}
int main(){
   infinite() ;
   return 0 ;
}*/



/*#include<iostream>
using namespace std ;
void infinite(){
   int i = 0 ;
   do{
      cout << " infinite loop working : " << i++ << " times " << endl;
    } while ( i < i+1 ) ;
   
}
int main(){
   infinite();
   return 0;
}*/