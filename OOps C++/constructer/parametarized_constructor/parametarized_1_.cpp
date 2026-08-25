#include<iostream>
using namespace std ;
class teacher{
    public:
    teacher( string n , string d , string s , double sal ){
        name = n ;
        dept = d ;
        subject = s ;
        salary = sal ;
    }
    string name ;
    string dept ;
    string subject ;
    double salary ; 

    // void display(){
    //     cout << "Name:"<< name << endl;
    //     cout << "Dept:" << dept << endl;
    //     cout << "Subject:" << subject << endl;
    //     cout << "Salary:" << salary << endl; 
    // }
};

int main(){
    teacher t1("HAshim Khan","Software Engin.." , "c++" , 45729);
    
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;
    
    return 0 ;

}