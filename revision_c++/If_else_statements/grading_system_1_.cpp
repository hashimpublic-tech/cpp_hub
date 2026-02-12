#include<iostream>
using namespace std ;
int main(){
    int numbers ;
    cout << " Enter numbers to find your grade : " ;
    cin >> numbers ;

    if(numbers >= 80 ){
        cout << " congratulations ! you get grade  : A : " << endl;
    } else if ( numbers >= 60 ){
        cout << " you get grade : B : " << endl;
    } else if ( numbers >= 50 ){
        cout << " you get grade : C :  " << endl;
    } else {
        cout << " you are fail  * " << endl;
    }
    return 0 ;
}