#include<iostream>
using namespace std ;
class student {
    public:
    student(){
        cout << "\nHi , I am constuctor\n" ;
    }
    string name ;
    string dept ;
};

int main(){
    student s1 ;
    s1.name = "Hashim Khan";
    s1.dept = "Software Engineering";

    cout << "Name:" << s1.name << endl;
    cout << "Dept:" << s1.dept << endl;
    cout << "\n" ;

    return 0 ;
}