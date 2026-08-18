// array are actually pointers itself :

#include<iostream>
using namespace std ;
int main(){
    int array[]={ 1 , 2 , 3, 4 , 5} ;

    cout << array << endl;   // it will print the first index address 

    cout << *array << endl;  // it will print the value in first index : 
    

    return 0 ;
}