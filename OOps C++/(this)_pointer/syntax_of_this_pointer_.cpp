#include<iostream>
using namespace std ;
class teacher{
    public:
    string name ;
    string dept ;
    double salary ;

    teacher( string name , string dept , double salary ){
        this->name = name ;
        this->dept = dept ;        // this operater will tell compiler that we are 
        this->salary = salary ;    // talking about object entitie not parameter .
    }

    void display(){
        cout << name << endl;           // to display entities :
        cout << dept << endl;
        cout << salary << endl;
    }
};
int main(){
    teacher t1( "hashim" ,"SE" ,45000);
    t1.display() ;

    return 0 ;
}