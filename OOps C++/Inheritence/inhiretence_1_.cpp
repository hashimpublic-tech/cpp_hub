#include<iostream>
using namespace std ;
class person{
    public:
    string name ;
    int age ;
};
class child : public person {
    public :
    int rollno ;

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "rollno : " << rollno << endl;

    }
};
int main(){
    child c ;
    c.name = "Hashim khan";
    c.age = 19 ;
    c.rollno = 45729 ;

    c.getInfo();
}