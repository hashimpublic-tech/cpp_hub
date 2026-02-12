// there are three logical operaters :
// one is logical OR ( || ) :
// one is logical AND ( && ) :
// one is Logical NOT ( ! ) :


#include<iostream>
using namespace std ;
int main(){

    cout << ( 3 == 3  || 3 == 2 ) << endl; // 1
    cout << ( 3 != 3  || 2 != 2 ) << endl; // 0 

    cout << ( 5 == 5 && 3 == 3 ) << endl; // 1 
    cout << ( 5 == 5 && 3 == 2 ) << endl; // 0

    // Logical NOT ( ! ) :
    cout << !( 3 == 3 ) << endl; // 0 
    cout << !( 3 == 2 ) << endl; // 1 


    


}