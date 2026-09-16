// this is the example of polymorphism.

#include<iostream>
using namespace std ;

class Student {
    public:
    string name ;
    Student(){
        cout << "\nNon-parameterized Constructor \n";
    }
    Student(string name ){
        this->name = name ;
        cout << "\nParameterized Constructer : \n\n";
    }
};
int main(){
    Student s1 ;
    Student s2("HAshim khan");
}