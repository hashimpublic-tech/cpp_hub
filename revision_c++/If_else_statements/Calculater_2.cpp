#include<iostream>
using namespace std ;
int main(){
    int number1;
    int number2 ;
    char operation ;

    

    cout << "\n enter your number : " ;
    cin >> number1 ;
    cout << " enter your operation :  " ;
    cin >> operation ;
    cout << " enter your number : " ;
    cin >> number2 ;

    if( operation == '+')
    {
        cout << "\n answer is : " << (number1+number2) << endl;
    } else if ( operation == '-')
    {
        cout << "\n answer is : " << ( number1-number2) << endl;
    } else if ( operation == '*')
    {
        cout << "\n answer is : " << ( number1*number2 ) << endl;
    } else if ( operation == '/' )
    {
        cout << "\n answer is : " << ( number1*number2 ) << endl;
    } else {
        cout << "\n invalid address ! " << endl;
    }

    return 0 ;
}