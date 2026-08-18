/*
#include<iostream>
using namespace std ;
int factorial( int num )
{
    int fact = 1 ;
    for( int i = 1 ; i <= num ; i++ )
    {
        fact*=i ;
    }
    return fact ;

}
int main(){

    int num ;
    cout << " enter num to find fact : " << endl;
    cin >> num ;

    cout << " factorail of " << num << " is " << factorial( num ) << endl;
    
}
    */



        


/*#include<iostream>
    using namespace std ;
    void atmMachine( int amount )
    {
        if( amount == 0 )
        {
            return ;
        }
        
        if ( amount >=  5000 )
        {
            cout << " 5000 notes " << endl;
            atmMachine( amount - 5000 ) ;
        } 
        else if ( amount >= 1000 )
        {
            cout << " 1000 notes " << endl;
            atmMachine( amount - 1000 ) ;
        } 
        else if ( amount >= 500 )
        {
            cout << " 500 notes " << endl;
            atmMachine( amount >= 500 ) ;
        }
        else {
            cout << " Invalid Amount " << endl;
        }
    }

    
    int main(){
        int amount ;
        cout << " enter amount : " << endl;
        cin >> amount ;

        for( int i = 1 ; amount > i ; i--){
        if( amount % 500 == 0 )
        {
            atmMachine( amount ) ;

            cout << amount << endl;
            break ;
        }
        else {
            atmMachine( amount ) ;
        }
     }
        return 0 ;
    }


*/





/*#include<iostream>
using namespace std ;
float forenhite( float temprature );
float forenhite( float temprature  )
{
    return (temprature = (temprature * 9/5 ) + 32) ;
}
int main(){

    float temprature ;

    cout << " * enter temprature : " << endl;
    cin >> temprature ;

    cout << "* tempature forenhite is  : " << forenhite( temprature ) << endl;
    return 0;
}

*/



/*#include<iostream>
using namespace std ;
 int function( int num1 , int num2 )
{
    num1 = num1+10 ;
    num2 = num2+10 ;

    cout << " num1 in function : " << num1 << endl;
    cout << " num2 in function : ";
    
    return num2 ;
}

int main(){
    int num1  ;
    int num2  ;

    cout << " enter number 1 : " << endl;
    cin >> num1 ;
    cout << " enter number  2: " << endl;
    cin >> num2 ;
    cout << "***\n" ;

     cout << function( num1 , num2 ) << endl ;
     cout << "* --------------*\n";
     cout << " value in main : " << num1 << "\nvalue in main : " << num2 << endl;
     return 0 ;
    
    
}*/




#include <iostream>
using namespace std;

void swapval(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a- b;
    cout << "*******************\n";
    cout << "Value of a is " << a << endl;
    cout << "value of and b is " << b << endl;
    cout << " *****************\n";
}

void swapref(int& a, int& b)
{

    a = a + b;
    b = b - b;
    a = a - b;
}

int main()
{
    int a, b;

    cout << "Enter first value: ";
    cin >> a;

    cout << "Enter second value: ";
    cin >> b;

    swapval(a, b);
    cout << "------------------\n ";
    cout << "After swap by value: a = " << a << endl;
    cout << " after swap by value :b = " << b << endl;

    swapref(a, b);
    cout << "-----------------\n";
    cout << "After swap by reference: a = " << a << endl;
    cout << "afterswap by reference : b = " << b<< endl;

    return 0;
}
    


