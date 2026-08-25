#include<iostream>
using namespace std ;
class teacher{
    public:
    string name ;
    string dept ;
    teacher(){
        dept = "Software Engineering" ;
    }
};

int main(){
    teacher a1 ;
    a1.name = "Hashim Khan" ;
    
    cout << "Name : " << a1.name << endl;
    cout << "Depatrment : " << a1.dept << endl ;

    return 0 ;
}