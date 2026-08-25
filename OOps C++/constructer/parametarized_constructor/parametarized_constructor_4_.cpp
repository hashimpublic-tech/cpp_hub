#include<iostream>
using namespace std ;
class teacher{
    public:
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
};
int main(){
    teacher t1("Hashim khan","SE","C++",25000);

    cout << "Name:"<< t1.name << endl ;
    cout << "dept:"<< t1.dept << endl;
    cout << "sub:" << t1.sub << endl;
    cout << "Salary:" << t1.salary << endl;

    return 0 ;

}