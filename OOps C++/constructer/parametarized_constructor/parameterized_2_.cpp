#include<iostream>
using namespace std ;
class teacher{
    public:

    teacher(string n , string d , string s , int sal){
        name = n ;
        dept = d ;
        sub = s ;
        salary = sal ;
    }
    string name ;
    string dept ;
    string sub ;
    int salary ;

    void Display(){
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "Subject : " << sub << endl;
        cout << "Salary : " << salary << endl; 
    }
};

int main(){
    teacher t("Hashim khan","Software Engeneering","C++",25000) ;
    t.Display();


    return 0 ;
}