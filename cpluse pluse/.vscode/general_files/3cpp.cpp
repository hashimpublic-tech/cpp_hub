#include<iostream>
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
    
   cout <<  digitSum( num ) << endl;
    
   return 0;
}