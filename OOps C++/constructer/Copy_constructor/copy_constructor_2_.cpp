#include<iostream>
using namespace std ;
class teacher{
    public :
    string name ;
    string dept ;
    string sub ;
    double salary ;

    teacher( string name , string dept ,string sub , double salary){
        this->name =name ;
        this->dept = dept ;
        this->sub = sub ;
        this->salary = salary ;
    }
    // copy customize constuctor
    teacher(teacher &obj){            // reference of 1st constructor .
        this->name = obj.name ;
        this->dept = obj.dept ;
        this->sub = obj.sub ;
        this->salary = obj.salary ;
    }

    void display(){
        cout << name << endl;
        cout << dept << endl;
        cout << sub << endl;
        cout << salary << endl;
    }
};

int main(){
    teacher t1( "hashim khan","SE","C++",25000);

    teacher t2(t1);
    t2.display();

    return 0 ;
}
