// 🔹 3. Employee & HR Department 🏢
// Scenario:

// Employee salary is private.
// HR class can update bonus and salary.

// Practice:
// Increase salary
// Show employee details

#include<iostream>
using namespace std ;
class Employee{
    private:
    int salary = 2500;

    void updateSalary(){
        salary = 3000 ;
    }    
    friend class HR ;
    
};
class HR{
    public:
    void update(){
        Employee e ;
        e.updateSalary();
        int bonus = e.salary * 0.10 ;
        e.salary = e.salary + bonus ;

        cout << "You get 10% bonus from HR : " << e.salary << endl;
    }
};
int main(){
    
    HR h ;
    h.update();

    return 0 ;

}