#include<iostream>
using namespace std ;
class employee{
    private:
    string name ;
    int employeeID ;
    string department ;
    float salary ;

    public:
    void setData(string n , int eI , string dep , float sal ){
        name = n ;
        employeeID = eI ;
        department = dep ;
        salary = sal ;
    }
    string displayName(){
        return name ;
    }
    int displayID(){
        return employeeID ;
    }
    string displaydep(){
        return department ;
    }
    float displaysalary(){
        return salary ;
    }
};
int main(){
    employee e1 ;
    
    e1.setData("hashim khan",45729,"SE" ,25000);

    cout << "Name : " << e1.displayName() << endl;
    cout << "ID : " << e1.displayName() << endl;
    cout << "Department : " << e1.displayName() << endl;
    cout << "Salary : " << e1.displayName() << endl;

    return 0 ;

}
