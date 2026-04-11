#include<iostream>
using namespace std ;
void changeA(int a ){
    a = 10 ;
    cout << "value of a in void : " << a << endl;
}
int main(){
    int a = 5 ;

    changeA(a) ;
    cout << "Value of a in main : " << a << endl;

    return 0 ;
}