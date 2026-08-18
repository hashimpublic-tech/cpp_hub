#include<iostream>
using namespace std ;
int main(){
    int array[5]={1 , 2, 3 , 4 , 5 } ;

    int* ptr = array ;
    cout << *(array) << endl;
    cout << *(array+1) << endl;
    cout << *(array+3) << endl;

    ptr++ ;

    cout << *ptr << endl;

    return 0 ;
}