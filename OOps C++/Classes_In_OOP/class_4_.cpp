#include<iostream>
using namespace std ;
class teacher{
    private :
    double salary ;
    public:
    string name ;
    string dept ;
    string sub ;

    void setSalary( double salary){
        this->salary = salary ;
    }
    double getSalary(){
        return salary ;
    }

};
int main(){
    teacher t1 ;
    t1.name = "Hashim khan" ;
    t1.dept = "Software Engineering";
    t1.sub =  "C++";
    t1.setSalary(2500) ;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.sub << endl;
    cout << t1.getSalary() << endl;

    return 0 ;

}
