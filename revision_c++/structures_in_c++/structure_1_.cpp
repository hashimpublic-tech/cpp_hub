#include<iostream>
using namespace std ;
struct employee {
    string name ;
    int age ;
    float salary ;
} ;

int main(){
    employee hashim ;
    hashim.name = "Hashim khan" ;
    hashim.age = 19 ;
    hashim.salary = 25000 ;

    cout << "name : " << hashim.name << endl;
    cout << "age : " << hashim.age << endl;
    cout << "Salary : " << hashim.salary << endl;

    return 0 ; 
}