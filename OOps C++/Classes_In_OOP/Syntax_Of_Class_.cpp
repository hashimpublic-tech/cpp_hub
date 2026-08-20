#include<iostream>
#include<string>
using namespace std ;
//class :
class teacher{
               //it is access modifier    
              // the class should be private , public or protected ;
public :
  // properties ;
  string name ;
  string department ;
  string subject ;
  double salary ;
  
  // methods ;

  void changeDept( string newDept ){
    department = newDept ;
  }

};
int main(){

    teacher t1 ;
    t1.name = " Hashim khan" ;
    t1.department = " Software Engineering";
    t1.subject = " OOPs" ;
    t1.salary = 25000 ;

    cout << "name : " << t1.name << endl;
    cout << "department : " << t1.department << endl;
    cout << "subject : " << t1.subject << endl;
    cout << "salary : " << t1.salary << endl;

    return 0 ;

}