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
    teacher t1;
    t1.name = "Hashim Khan" ;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    
    return 0 ;

}