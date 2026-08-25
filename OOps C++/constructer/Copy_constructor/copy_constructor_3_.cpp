#include<iostream>
using namespace std ;
class student{
    public:
    string name ;
    string department ;
    double fees ;

    student( string name , string department , double fees ){
        this->name = name ;
        this->department = department ;
        this->fees = fees ;
    }
    void display(){
        cout << name << endl;
        cout << department << endl;
        cout << fees << endl;

    }
};
int main(){
    student s1 ( "Hashim khan" , "SE" , 25000);

    student s2(s1);     // copy constructor :
    s2.display() ;

    return 0 ;
    
}
