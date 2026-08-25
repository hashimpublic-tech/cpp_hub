#include<iostream>
using namespace std ;
class teacher{
    public:
    teacher(){
        cout << "Hello , I am constructor\n" ;
    }
    string name ;
    string dept ;
    string sub ;
    double salary ;

    teacher( string name , string dept , string sub , double salary ){
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
    teacher t2 ;
    teacher t1("Hashim khan","Software Engineering","C++" ,2500);
    t1.display() ;
    
}