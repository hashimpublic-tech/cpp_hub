#include<iostream>
using namespace std ;
class student {
    public:
    student(){
        cout << "Hello , I am Constrctor\n";
    }
    string name ;
    string dept ;
    string section ;
    double fees ;
};
int main(){
    student s1 ;
    s1.name = "Hashim Khan";
    s1.dept = "SOftware Engineering" ;
    s1.section = "A" ;
    s1.fees = 170000 ;


    cout << "Name :" << s1.name << endl;
    cout << "dept :" << s1.dept << endl;
    cout << "Section :" << s1.section << endl;
    cout << "fees :" << s1.fees << endl;
    
    return 0 ;
}