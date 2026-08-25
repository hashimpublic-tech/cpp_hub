#include<iostream>
using namespace std ;
class employee{
    public:
    employee(){
        dept = "Computer Science " ;
    }
    string name ;
    string dept ;
};
int main(){
    employee e1 ;
    e1.name = "Nouman Rafi:" ;

    cout << "Name : " << e1.name << endl;
    cout << "Dept : " << e1.dept << endl;

    employee e2 ;
    e2.name = "Hashim Khan" ;

    cout << "Name : " << e2.name << endl;
    cout << "Dept : " << e2.dept << endl;


    return 0 ;

}