#include<iostream>
using namespace std ;
class teacher{
    public:
    string name ;
    string dept ;
    string subject ;
    int salary ;

    void changeDept(string newDept ){
        dept = newDept ;
    }
};
int main(){
    teacher t1 ;
    t1.name = "Noman al Hassan";
    t1.dept = "SE" ;
    t1.subject = "C++";
    t1.salary = 25000 ;

    cout<< "Name : " << t1.name << endl;
    cout << "Dept : " << t1.dept << endl;
    cout<< "sub : " << t1.subject << endl;
    cout << "salary : " << t1.salary << endl;

    t1.changeDept("pythan") ;

    cout << t1.dept << endl;
}