#include<iostream>
using namespace std ;
class student {
    public:
    string name ;
    string dept ;
    double fees ;

    student(string name , string dept , double fees ){
        this->name = name ;
        this->dept =dept ;
        this->fees = fees ;
    }
    student(student &orgobj){
        this->name = orgobj.name ;
        this->dept = orgobj.dept ;
        this->fees = orgobj.fees ;
    }
    void display(){
        cout << name << endl;
        cout << dept << endl;
        cout << fees << endl;
    }
} ;
int main(){
    student s1("Hashim khan" , "SE",25000);

    student s2 (s1);
    s2.display() ;

    return 0;
}