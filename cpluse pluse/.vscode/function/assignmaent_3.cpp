/*#include<iostream>
using namespace std ;
int main(){
    int num ;
    bool isprime = true ;

    cout << " enter number " << endl;
    cin >> num ;

    for( int i = 2 ; i < num ; i++ )
    {
        if( num%i == 0 )
        {
            isprime = false ;
        }
    }
    if( isprime == true ){
        cout << " prime " << endl;
    } 
        else {
        cout << " non prime : " << endl;
    }
    return 0 ;

    }*/








/*#include<iostream>
using namespace std ; 
int digitSum( int num )
{
    int digSum = 0 ;
    int lastDigit ;

    while ( num > 0 )
    {
        lastDigit = num % 10 ;
        num = num / 10 ;

        digSum += lastDigit ;

        
    } 

    return digSum ;
}
int main(){
    int num ;
    cout << " enter number to find their sum of digit : " << endl;
    cin >> num ;

   cout <<  digitSum( num ) << endl;
   return 0;
}

*/


/*#include<iostream>
using namespace std ;

int factorial( int num ){
    int fact = 1 ;

    for( int i = 1 ; i <= num ; i++ )
    {
        fact*=i ;
    }
    return fact ;
}
int nCr( int n , int r )
{
    int fact_n = factorial( n ) ;
    int fact_r = factorial( r ) ;
    int fact_nmr = factorial( n-r ) ;

    return  fact_n / ( fact_r  * fact_nmr ) ;
}
int main()
{
    system( " color 1B " ) ;
    int n ;
    int r ;
    
   
    cout <<" enter value for ' n ' : " << endl;
    cin >> n ;
    cout << " enter value for ' r '  " << endl;
    cin >> r ;

    cout << " ncr of " << n << " and " << r << " is " << nCr( n , r ) << endl;
    


return 0 ;}
*/





/*#include<iostream>
using namespace std ;
int decToBinary( int num )
{
   int ans = 0 ;
   int power = 1 ;
   
   while ( num > 0 )
   {
    int rem = num % 2 ;
    num /= 2 ;

    ans += ( rem * power ) ;
    power *= 10 ;
  
}
return ans ;
}
int main(){
    int num ;
    cout << " enter num to convrt binary : " << endl;
    cin >> num ;

    cout << decToBinary( num ) << endl;

    return 0 ;
}



*/

/*#include<iostream>
using namespace std ;
int dectobinary( int num ) 
{
    int ans = 0 ;
    int power = 1 ;
    int remender ;

    while ( num > 0 )
    {
        remender = num % 2 ;
        num = num / 2 ;

        ans += ( remender * power ) ;
        power = power * 10 ;

    }
    return ans ;
}
int main(){
    int num ;
    cout << " enter number to find its binary form : " << endl;
    cin >> num ;

    cout << " binary form of " << num << " is : " << dectobinary( num ) << endl;
    
    return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int decToBinary( int num )
{
    int binry = 0 ;
    int power = 1 ;
    int remender ;

    while( num > 0 ) 
    {
        remender = num % 2 ;
        num = num / 2 ;
        
        binry += ( remender * power) ;
        power = power * 10 ;

    }
   return binry ;
}
int main()
{
    int num = 10 ;

    for( int i = 1 ; i <= 10 ; i++ )
    {
        cout << decToBinary(i) << endl;
    }

    return 0 ;
}*/




/******************************************************** */



/*#include<iostream>
using namespace std ;
int binaryToDec( int num )
{
    int ans = 0 ;
    int power = 1 ;
    int rem ;
     while( num > 0 )
     {
        rem = num % 10 ;
        ans += rem*power ;

        num /= 10 ;
        power = power * 2 ;
     }
     return ans ;

}
int main()
{
    int num = 1100 ;

    cout << binaryToDec(num) << endl;
    return 0 ;
}*/




/******************** */

#include<iostream>
using namespace std ;
int binaryToDec( int num )
{
    int ans = 0 ;
    int power = 1 ;
    int remender ;

    while( num > 0 )
    {
        remender = num % 10 ;
        num = num / 10 ;

        ans += ( remender * power ) ;
        power*= 2 ;
    }
    return ans ;
}
int main(){
    int num ;
    cout << " enter binary to convert decimal : " << endl;
    cin >> num ;

    cout << binaryToDec( num ) << endl;
    return 0 ;
}



/********************* */




/*#include<iostream>
using namespace std ;
int digitSum( int num ) 
{
    int digSum = 0 ;
    int remender ;
    while( num > 0 )
    {
        remender = num % 10 ;
        num = num / 10 ;
        digSum += remender ;
    }
    return digSum ;
}
int main(){
    int num ;
    cout << " enter number to find their digit sum : " << endl;
    cin >> num ;

    cout << digitSum( num ) << endl;
    return 0 ;
}*/