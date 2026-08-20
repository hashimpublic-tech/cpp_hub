#include<iostream>
using namespace std ;
class student{
    private:
    double fee ;
    public:
    string name ;
    int id ;
    string department ;
    string teacherName ;
    

    void setfee( double Fees){
        fee = Fees ;
    }
    double getFees(){
        return fee ;
    }
};
int main(){
    int choice ;
    student s1 ;
    s1.name = "Hashim Khan" ;
    s1.id = 45729 ;
    s1.department = "Software Engineering" ;
    s1.teacherName = "Nouman Rafi" ;
    s1.setfee(170000) ;

    cout << "search student number : " ;
    cin >> choice ;

    if( choice == 1){
    cout << "\nName : " << s1.name << endl;
    cout << "ID : " << s1.id << endl;
    cout << "Department : " << s1.department << endl;
    cout << "Teacher Name : " << s1.teacherName << endl;
    cout << "Fees : " << s1.getFees() << endl; 
    cout << "\n" ;
    }
    
    return 0;
}