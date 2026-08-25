#include<iostream>
using namespace std ;
class employee{
    public:
    employee(){
        cout << "HI , I am Constructor : " << endl;
    }

    string name ;
    int id ;
    int salary ;
};
int main(){
    employee e1 ;
    e1.name = "Hashim khan";
    e1.id = 45729 ;
    e1.salary = 25000 ;

    cout << "Name : " << e1.name << endl;
    cout << "ID : " << e1.id << endl;
    cout << "Salary : " << e1.salary << endl;

    return 0 ;

}