#include<iostream>
using namespace std ;
class teacher{
    public :

    teacher(){
        cout << "HI , I am constructor : " << endl;
    }
    teacher(string name , string dept , string sub , int salary ){
        this->name = name ;
        this->dept = dept ;
        this->sub = sub ;
        this->salary = salary ; 
    }
    string name ;
    string dept ;
    string sub ;
    int salary ;

    void display(){
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
        cout << "Sub : " << sub << endl;
        cout << "Salary : " << salary << endl;
    }

};
int main(){
    teacher t2 ;
    teacher t("HAshim", "Software E " , "Sub" , 25000);
    //t.display();

    teacher t3(t);
    t3.display();

    return 0 ;
}