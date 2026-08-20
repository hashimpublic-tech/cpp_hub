#include<iostream>
using namespace std ;
struct student {
    string name ;
    int age ;
    int rollNumber ;
    float CGPA ;
};
int main(){
    student s1 ;
    s1.name = "Hashim khan" ;
    s1.age = 19 ;
    s1.rollNumber = 45729 ;
    s1.CGPA = 3.5 ;

    cout <<"\n*********************\n" ;
    cout << "Name :" << s1.name << endl;
    cout << "Age :" << s1.age << endl;
    cout << "RollNumber :" << s1.rollNumber << endl;
    cout << "CGPA :" << s1.CGPA << endl;
    cout <<"*********************\n\n" ;

    return 0 ;

}