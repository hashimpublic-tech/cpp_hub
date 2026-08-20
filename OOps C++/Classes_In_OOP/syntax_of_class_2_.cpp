#include<iostream>
using namespace std ;

class teacher{
private:
double salary ;
public:
string name ;
string department ;
string subject ;


void changeDept( string newDept){
    department = newDept ;
}
// how to give access of private variables to publuc :
// setter :
void setSalary( double slry){
    salary = slry ;
}
//getter :
double getSalary(){
    return salary ;
}
};
int main(){

teacher t1 ;
t1.name = "Hashim khan" ;
t1.department = "Software Engineering";
t1.subject = "C++";
t1.setSalary(25000) ;

cout << "name : " << t1.name << endl;
cout << "department : " << t1.department << endl;
cout << "subject : " << t1.subject << endl;
cout << t1.getSalary() << endl; 


}