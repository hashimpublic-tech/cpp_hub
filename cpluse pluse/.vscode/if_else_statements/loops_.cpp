/*#include<iostream>
using namespace std ;
int main(){
    int n = 10 ;

    for(int i=1 ; i<=n ; i++){
        cout << i << endl;
    }return 0 ;
}*/


/*#include<iostream>
using namespace std ; 
int main(){
    int n = 20 ;
    for(int i = 1 ; i <= n ; i++ ){
        if(i%2==0){
            cout << " its even number from 1 - n : " << i << endl;
        }
    }return 0 ;
}*/


#/*#include<iostream>
using  namespace std ;
int main (){
    int n = 5 ;

    for(int i = 1 ; i<=n ; i++){
        cout << "*" << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int number ;
    float sum = 0 ;

    for(int i = 1 ; i <=n ; i++){

        cout << " enter nuber : " << endl;
        cin >> number ;

        sum+=number ;
    }cout << " its the sum of all these numbers : " << sum << endl;
    cout << " its the avg of all these numbers : " << sum/n << endl;
    return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n ;

    cout << " enter a number to make there table : " << endl;
    cin >> n ;

    for(int i = 1 ; i <= 10 ; i++ ) {
        cout << i << " * " << n << " = " << i*n << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ; 
int main(){
    int n ;
    cout << " enter a number : " << endl ;
    cin >> n ;

    for(int i = 1  ; n >= i  ; n-- ){
        cout << " its counting down number : "  << n << endl;

    }return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << " enter a number : " << endl;
    cin >> n ;

    for (int i = 1 ; i <= 3 ; i++){
        cout << " hashim khan : " << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << " enter a number : " << endl;
    cin >> n ;

    for (int i = 1 ; i <= 3 ; i++){
        cout << " hashim khan : " << endl;
    }return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 10 ;
    int m = 15 ;

    for(int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= m ; j++){
            cout <<"*" ;
        }cout << endl;
    }return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n = 3 ;
    
    for(int i = 1 ; i <= n  ; i++ ){
        for(int j = 1 ; j <= n ; j++ ){
            cout << j<<" " ;
            

        }cout << endl;
    }return 0 ;
}
*/

/* #include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int m = 1 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << m << " " ;
           m= m+1;
        }cout  << endl;
     } return 0 ;}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    char ch = 'a';

    for(int i = 1 ; i <=n ; i++){
        for ( int j = 1 ; j<= n ; j++){
            cout << ch <<" " ;
            ch = ch + 1 ;
        }cout << endl ;
    }cout << " the next value of ch :  " << ch << endl;
    return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int  main(){

    int n = 5 ; 
    int m = 1 ;

    for(int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n; j++){
            cout <<  m  << " " ;
            m = m + 1 ;
        }cout << endl;
    }return 0 ;
}*/


/*#include<iostream>
using namespace std ; 
int main(){
    int n = 5 ;
    char ch = 'A';


    for(int i = 1 ; i<=n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cout << ch << "  " ;
            ch = ch + 1 ; 
        }cout << endl;
    }cout << " the next value of ch is :  "  << ch << endl;
    return 0 ;
}*/

/*#include<iostream>
using namespace std ;
int main(){
    int n = 7 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ;  j <= n ; j++){
            cout << j << " " ;

        }cout << endl;
    }return 0 ;
}
*/


/*#include<iostream>
using namespace std ; 
int main(){
    int subject  ;
    int sum = 0;
    
    for(int i = 1 ; i <= 3 ; i++){
        cout << " enter numbers : " << endl;
        cin >> subject ;
        
        cout << " enter number : " << subject << endl;
        sum += subject ;
    }
    cout << " its the avg of following numbers :  "<<  sum/ 3 << endl;
    return 0 ;

}*/

//**********triangle patterns ************ */



/*#include<iostream>
using namespace std ;
int main(){
    int n = 20 ;
    for(int i = 0 ; i < n  ; i++){
        for(int j = 0 ; j < i+1 ; j++ ){
            cout << "*"  << " ";
        }cout <<endl;
    } 
    return 0;
}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 8 ;

    for(int i = n ; i > 0 ;i--){
        for(int j = i ; j > 0 ; j--){
            cout << "* " ;
         }cout << endl;
    }return 0 ;
}


*/


/*#include<iostream>
using namespace  std ;
int main(){
    int n = 10 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j > 0 ; j--){
            cout << j << " " ;
        }cout << endl;
    }return 0 ;
}*/

/*************************** */

/*#include<iostream>
using namespace std ;
int main(){
    int n = 6 ;
    int m = 1 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j ++ ){
            cout <<  m  << " " ;
            m=m+1 ;
        }cout << endl;
    }return 0 ;
}*/

/******************************************** */


/*#include<iostream>
using namespace std ;
int main(){
int n = 8 ;
for(int i = 0 ; i < n ; i++){
    for(char ch = 'A'+ i  ; ch > 'A' ; ch--){
        cout << ch << " " ;
    }cout << endl;
}return 0 ;

}*/

/********************************** */

/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;

for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < i; j++){
        cout << " " ;
    }

    for(int j = 0 ; j < n-i ; j++){
        cout << i+1;
    }cout << endl;
}return 0 ;
}*/

/*1111
   222
    33
     4*/

/*************************************** */

/*#include<iostream>
using namespace std ;
int main(){

    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << " " ;
        }
        for(int j = 0 ; j < n-i ; j++){
            cout << i+1 <<" " ;
        }cout << endl;
    }return 0 ;
}*/
/*1 1 1 1 
 2 2 2
  3 3 
   4*/


   //*********************** */


/*#include<iostream>
using namespace std ;
 int main(){
    int n = 5 ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0  ; j < i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < n-i ; j++){
            cout << ('A'+ 1) << " ";
        }cout << endl;
    }return 0 ;
 }*/



 /*#include<iostream>
 using namespace std ;
 int main(){
    int n = 6 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < i ; j++){
            cout << j ;
        }
        for(int j = 1 ; j < i ; j++){
            cout << j ;
        }cout <<endl;
    }return 0 ;
 }



*/
 /* 0 1 
   0 1 2 1 
  0 1 2 3 2 1 
 0 1 2 3 4 3 2 1 
0 1 2 3 4 5 4 3 2 1 */




/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0  ; j < n-i ; j++){
            cout << " " ;
        }cout << "*";

    if(i!=0){
        for(int j = 0 ; j < 2*i-1 ; j++){
            cout << " " ;
        }cout << "*" ;
    }cout << endl;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout << " " ;
        }cout << "*" ;

        for(int j = 0 ; j < 2*(n-1-i) ;j++){
            cout << " " ;
        }cout << "*" << endl;
    }
}*/

//******************************************* */

 // butterfly pattern : ******




/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ;j++){
            cout << "*" ;
        }
        for(int j = 0 ; j < n-i ;j++){
            cout << " " ;
        }
        for(int j = 0 ; j < n-i ; j++){
            cout << " " ;
        }
        for(int j = 0  ; j < i; j++){
            cout << "*";
           
    }cout << endl; 
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout << "*" ;
        }

        for(int  j = 0 ; j < i+1 ; j++){
            cout << " " ;
        }
        for(int j = 0 ; j < i ; j++){
            cout << " " ; 
        }
        for(int j = 0 ; j < n-i ; j++){
            cout<< "*";
        }cout << endl;
}return 0 ;
}*/

/**
**        *
***      **
****    ***
*****  ****
***** *****
****   ****
***     ***
**       **
*         **/


//*************** */


/*#include<iostream>
using namespace std ; 
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ;j++){
            cout << " " ;
        }cout <<"*" ;
        for(int j = 0 ; j < i+1 ; j++){
            cout <<" " ;
        }for(int j = 0 ; j < i+1 ; j++){
            cout <<" " ; }
           cout << "*" << endl;
       
        }for(int i = 0 ; i < 1 ; i++){
            for(int j = 0 ; j < 7 ; j++){
            cout << "* ";}
        }
        

    }*/

 /*  *  *
    *    *
   *      *
  *        *
 *          *
* * * * * * *    */




//***************** */



/*#include<iostream>
using namespace std ;
int main(){
    int shelve ;
    int books ;
    int totalBooks = 0 ;

    cout << " enter number of shelve in liberary : " << endl;
    cin >> shelve ;

    for(int i = 1 ; i <= shelve ; i++){

        cout << " enter the number of books in shelve " << i << " : " << endl;
        cin >> books ;

        for(int j = 1 ; j <= books ; j++ ){
            cout << " shelve " << i << " contains book " << j << " : " << endl;
            totalBooks++ ;
         }
    }cout << " tbooks : " << totalBooks << endl;
}*/




/***************************************** */

//how to check the number is prime or not ;

/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    bool isprime = true ;

  
     cout << " enter a number : " << endl;
    cin >> n ;

    for(int i = 2 ; i < n ;i++ ) {

        if(n%i == 0){
            isprime = false ;
            break ;
        }
    }
    if(isprime == true){
        cout << " number is prime : " << n << endl;
    } else {
        cout << " number is non prime : " << n << endl;
    } return 0 ;
}*/



/**************************************** */



#include<iostream>
using namespace std ;
int main(){
    int array [5]={ 12 , 23  , 32 , 21 , 12 };
    int number ;
    bool num = false ;

    cout << " enter a number to check serial number : " << endl;
    cin >> number ;
    for( int i = 0 ; i < 5 ; i++ ){
        if( number == array[i]){
            num = true ;
        }
    }
    if( num == true ){
        cout << " number found : " << endl;
    } else {
        cout << " not found : " << endl;
    }
    return 0 ;
}