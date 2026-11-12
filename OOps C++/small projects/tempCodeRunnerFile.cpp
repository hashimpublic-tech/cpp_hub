// 🔹 5. Employee Salary System
// 💡 Scenario:

// Calculate salary of employees with bonus.

// 🔧 Concepts:
// if-else → bonus condition
// Functions → calculateSalary()
// Encapsulation → Employee class
// Inheritance → Manager, Worker
// 🧠 Task:
// Manager gets 20% bonus
// Worker gets 10% bonus

#include<iostream>
using namespace std ;
class Employee{
    protected:
    string name ;
    float basicSalary ;

    public:

    void employeeInput(){
        cout << " Enter Name : " ;
        getline(cin >> ws , name ) ;

        cout << "Enter Basic Salary : " ;
        cin >> basicSalary ;
    }
};
class Worker : public Employee {
    public :
    void calSalary(){
        float bonus = basicSalary * 0.10 ;
        float finalSalary = basicSalary + bonus ;

        system("cls");
        cout << "\nName : " << name << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus (10%): " << bonus << endl;
        cout << "Your Final Salary : " << finalSalary << endl;
    }
};
class Manager : public Employee {
    public : 
    void calSalary(){
        float bonus = basicSalary * 0.20 ;
        float finalSalary = basicSalary + bonus ;

        system("cls");

        cout << "Name : " << name << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus (20%) : " << bonus << endl;
        cout << "Your Final Salary : " << finalSalary << endl; 

    }
};
int main(){
    int choice ;
    cout << "\n1 For Worker : \n2 For Manager : \n";
    cin >> choice ;


    Employee* ptr ;
    
    Employee e ;
    Worker w;
    Manager m ;

    if( choice == 1){
        
        ptr = &e ;
        ptr-> employeeInput();
        
        ptr = &w;
        ptr->calSalary();
    } else if (choice == 2){
        ptr = &e ;
        ptr->employeeInput();
        
        ptr = &m ;
        ptr->calSalary();
    } else {
        cout << "Invalid Choice \n";
    }

    return 0 ;
}