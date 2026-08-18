//****************RECURSIVE FUNCTIONS ******************** */

/*#include<iostream>
using namespace std ;
void recursive( int num ){
    if( num == 10 ){
        cout << " 10 " << endl;
        return ;
    }
    cout << num << endl;
    recursive( num + 1) ;
}
int main(){
    int num = 1 ;
    recursive(num);
    return 0;
}


*/

/********************************* */



//loop on recursive function :

/*#include<iostream>
using namespace std ;
void recursive(int n){
    if( n == 10 ){                           // base case : base case mean where our function end ;
    cout << " 10 " << endl;                  // the ending point of function called base case ;
        return;
    }


    cout << n << endl;
    recursive( n+1 );

}
int main(){
    int n = 1 ;
    int num = 0 ;
    while( num < 10 ){
        num++;
        cout << " loop  " << num << endl;
    recursive(n) ;

    
    }
    return 0 ;
}*/


/*********************************** */

// number factorial using recursive function : 

/*#include<iostream>
using namespace std ;
 int fact( int num ){
    int facto = 1 ;
    if( num == 0 ){
        return 1 ;
    }
   
    return  num * fact( num-1 ) ;
 }
 int main(){
    int num = 4 ;
    cout << fact(num) << endl;;
    return 0 ;
 }
*/


/********************************** */

// factorial using recursive function 2 method ;



/*#include<iostream>
using namespace std ;
int factorial( int num ){
    int fact = 1 ;

    if( num == 0 ){
        return 1 ;
    }
    fact = num * factorial( num - 1) ;
    return fact ;
}
int main(){
    int num =  5 ;
    cout << " factorial of "  << num << " is " << factorial( num ) << endl;

    return 0;
}
*/



/****************************** */

// how to print names using recursive function :


/*#include<iostream> 
using namespace std ;
string letters(string name , int counts   ){

    if( counts == 5 ){
        return name ;
    }
    cout << name << endl;
     cout << letters(name , counts+1) << endl ;
}
int main(){
    string name = "hashim" ;
     cout << letters( name , 0 ) << endl ;
    return 0 ;
}*/

/************************************** */


/*#include<iostream>
using namespace std ;
string printNames( string name , int counts  ){
   
    if( counts == 5 ){
        return name ;
    }
    cout << name << endl;
    cout << printNames( name , counts + 1  ) << endl;
}
int main(){
    string name = " hashim ";
    int countname  ;
    cout  << " " <<  printNames( name , 0 ) << endl;
    return 0 ;
}*/


/***************************************** */


// You want a function that prints numbers from 1 to N.
// Why recursion?
// Each call prints one number and calls itself for the next number.
// Example idea:
// Print 1 → call function(2) → print 2 → call function(3) …


/*#include<iostream>
using namespace std ;
void printNextNum( int num ){
    if( num == 10 ){
        return ;
    }
    cout << num << endl;
    printNextNum(num + 1) ;

}
int main(){
    int num = 1 ;
    printNextNum( num );

    return 0 ;
}*/

/************************************************ */


/*
#include<iostream>
using namespace std ;
void printNextNum( int num ){
    if( num == 10 ){
        return ;
    }
    cout << num << endl;
    printNextNum(num + 1) ;

}
int main(){
    int num = 1 ;
    printNextNum( num );

    return 0 ;
}
    */


    /************************************************** */


    /*
    #include<iostream>
    using namespace std ;
    int factorial( int num ){
        int fact = 1 ;
        if( num == 0 ){
            return 1 ;
        }
        fact = num * factorial( num - 1 );
        return fact ;
    }
    int main(){
        int num = 4 ;

        cout << factorial( num ) << endl;

        return 0 ;
    }
        */



        /*************************** */


        /*
        #include<iostream>
        using namespace std ;
        int factorial( int num ){
            int fact = 1 ;
            if( num == 0 ){
                return 1 ;
            }
            fact = num * factorial( num - 1 ) ;
            return fact ;
        }
        int main(){
            int num = 5 ;

            cout << "\n factorial of " << num << " is : "  <<  factorial( num )  << " \n " << endl;

            return 0 ;
        }
            */



            /******************************* */


            /*
             #include<iostream>
            using namespace std ;
            int sumMarks( int array[] , int num ){
                int sum = 0 ;

                if( num == 0 ){
                    return 0 ;
                }
                sum = array[ num - 1 ] + sumMarks( array , num - 1  ) ;
                return sum ;               
            }
            int main(){
                int array[] = { 2  , 4 , 6 ,  8 , 10 , 12 };
                int num = 6 ;

                cout << " sum is " << sumMarks( array , num ) << endl;
                return 0 ;
            }
                */



                /************************************* */


                /*
                #include<iostream>
                using namespace std ;
                int sumMarks( int array[] , int num ) {
                    int sum = 0 ;

                    if( num == 8 )
                    {
                        return 0 ;
                    }
                    sum = array[ num  ] + sumMarks ( array , num + 1 ) ;
                    return sum ;
                }
                int main(){
                    int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };
                    int num = 0 ;

                    cout << sumMarks( array , num ) << endl;

                    return 0 ;
                }
                    */


                    /*************************************** */



/*#include<iostream>
using namespace std ;
string printString( string name  , int counts  ){

    if( counts == 5 ){
        return name  ;
    }
    cout << name << endl;
    cout << printString( name , counts + 1 ) << endl ;
}
int main(){
    int counts = 0 ;
    string name = " hashim " ;

    cout << printString( name , counts ) << endl ;

    return 0 ;
}*/


/******************************** */



/*#include<iostream>
using namespace std ;
void printNums( int num ) 
{
   
    if( num == 0){
        return  ;
    }
    cout << num << endl;
     printNums( num - 1 ) ;   
}
int main(){
    int num = 10 ;
     printNums( num ) ;

    return 0 ;
}
    */


    /************************************* */


    // factorial:

    /*
    #include<iostream>
    using namespace std ;
    int factorial( int number ){
        int fact = 1 ;

        if( number == 0 ){           // base case : where our function will end , ending point .
            return 1 ;
        }
        fact = number * factorial( number -1 ) ;
        return fact ;
    }
    int main(){
        int number ;
        cout << "\n enter a number to find factorial : " ;
        cin >> number ;

        cout << " fatorial of " << number << " is " << factorial( number ) <<" \n" << endl;
        return 0 ;
    }
        */


/*********************************************** */


// sum of N numers :


/*
#include<iostream>
using namespace std ;
int sumOfNumbers( int number ){
    int sum = 1 ;
    if( number == 1 ){
        return 0 ;
    }
    //cout << number << endl;
    sum = number + sumOfNumbers( number - 1 ) ;
    return sum ;
}
int main(){

    int  number = 10 ;

    cout << sumOfNumbers(number ) << endl;
    return 0 ;
}
    */

    /**************************************** */

// fabonacci :

/*
    #include<iostream>
    using namespace std ;
    int fibonacci( int num ){
        if( num == 0  || num == 1 ){
            return num ;
        }
        return fibonacci( num - 2 ) + fibonacci( num - 1 ); 
    }
    int main(){
        cout << fibonacci( 7 ) << endl;
        return 0 ;
    }
    */




/********************************** */



/*
#include<iostream>
using namespace std ;
int fib( int num  ){
    if( num == 0 || num == 1  ){
        return num ;
    }
    return fib( num - 2) + fib( num - 1 ) ;
}
int main(){
    
    int num ;
    while( true ){
        
    cout << "\n enter num to find fabonacci term : " ;
    cin >> num ; 
    system( " cls ") ;
    

    cout << " first " << num << " index of fibonacci is : "  ;
    for( int i = 0 ; i < num ; i++ ){

    
    cout  << fib(i) << " ";

    } cout << endl;
    
}
return 0 ;
}
*/



/********************************************* */



/*#include<iostream>
using namespace std ;
int fibonacci( int num ){
    if( num == 0 || num == 1 ){
        return num  ;
    }
    return fibonacci( num - 2 ) + fibonacci( num - 1 ) ;
}
int main(){
    int num ;
    while( true ){
        cout << " enter number to find fibonacci : " ;
        cin >> num ;
        for( int i=0 ; i<num ; i++ ){
             cout << fibonacci( i ) << " ";

        }cout << endl;
    }
    
   
    return 0 ;
}
*/



/**************************************** */


/*#include<iostream>
using namespace std ;
int fib( int num ){
    if( num == 1 || num == 0 ){
        return num ;
    }
    return fib( num - 2 ) + fib ( num - 1 ) ;
}
int main(){
    int num = 7 ;
    cout <<" value on index " << num << " is  : " << fib( num ) << endl;

    return 0 ;
}*/


/****************************************** */



#include<iostream>
using namespace std ;
int fib( int num ){
    if ( num == 0 || num == 1 ){
        return num ;
    }
    return fib( num - 2 ) + fib( num - 1 );
}
int main(){
    int num ;
    while( true ){
        cout << "\n Enter number to find fibonacci : " ;
        cin >> num ;
     
        cout << " fibonacci series according num is : " ;
        for( int i = 0 ;  i < num ; i++ ) {
            cout << fib( i ) << " " ;
        }
        cout << endl;
    }
    return 0 ;
}