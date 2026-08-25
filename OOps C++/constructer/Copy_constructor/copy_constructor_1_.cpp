#include<iostream>
using namespace std ;
class teacher {
    public:
    string name ;
    string dept ;
    string sub ;
    double salary ;

    // constructor
    teacher( string name , string dept , string sub , double salary){
        this->name = name ;
        this->dept = dept ;
        this->sub = sub ;
        this->salary = salary ;
    }
    void display(){
        cout << name << endl;
        cout << dept << endl;
        cout << sub << endl;
        cout << salary << endl;
    }
};
int main(){
    teacher t1 ( "hashim","SE","C++",2500);
    teacher t2(t1) ;
    t2.display() ;

    return 0 ;
}