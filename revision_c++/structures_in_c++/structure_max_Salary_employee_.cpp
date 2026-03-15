// 3️⃣ Employee Salary System
// Create a structure Employee with:
// name
// id
// salary

// Task:
// Input 4 employees.
// Display employees whose salary is greater than 50,000.



#include<iostream>
using namespace std ;
struct employee {
    string name ;
    int id ;
    float salary = 0;
};

void employeeDetails( employee e1[]){
    string seniorEmployee ;
    int employeeId ;
    float employeeSalary  ;

    for( int i=0 ; i<3 ; i++){
        if(e1[i].salary >= 50000 ){
            employeeSalary = e1[i].salary ;
            seniorEmployee = e1[i].name ;
            employeeId = e1[i].id ;
        }
    }
    cout << "Name : " << seniorEmployee << endl;
    cout << "ID : " << employeeId << endl;
    cout << "Employee Salary : " << employeeSalary << endl;
}
int main(){
    employee e1[3];
    cout << "\nEnter Data For Employees : \n" << endl;
    
    for( int j=0 ; j<3 ; j++ ){
        cout << "Enter Data For Employee " << j+1 << endl;

        cout <<"Enter name : " ;
        getline(cin >> ws , e1[j].name ) ;

        cout << "Enter Id : "  ;
        cin >> e1[j].id ;

        cout << "Enter salary : " ;
        cin >> e1[j].salary ;

        system("cls");
    }

    employeeDetails(e1) ;

    return 0 ;

}