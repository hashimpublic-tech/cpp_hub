#include<iostream>
using namespace std ;
class employee{
    public:
    string name ;
    int id ;
    float salary ;

    void displayEmployee(){
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "Hello . This is a class of Employee :"<< endl; 
    }
};
class AcadmicStaff : public employee{
    public :
    string subject ;
    void displayAcadmicStaff(){
        cout << "\nSubject : " << subject << endl;
        cout << "Hello This Is The AcadmicStaff Class :" << endl;
    }
};
class professor : public AcadmicStaff{
    public :
    int publicationsCount ;
    void displayProfessor(){
        cout << "\nPublications Count : " << publicationsCount << endl;
        cout << "Hello This Is The Class Of PubicationsCount : " << endl;
    }
};

int main(){
    professor p;
    p.name = "Hashim khan";
    p.id = 45729 ;
    p.salary = 75000 ;
    p.subject = "Programing Fundamentals";
    p.publicationsCount = 3 ;
    p.displayEmployee();
    p.displayAcadmicStaff();
    p.displayProfessor();

    return 0 ;
}