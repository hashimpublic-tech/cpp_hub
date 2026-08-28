#include<iostream>
using namespace std ;
class employee{
    public:
    string name ;
    int id ;
    float salary ;
};
class acadmicStaff : public employee{
    public :
    string subject ;
};
class professor : public acadmicStaff{
    public :
    int publications ;

    void getInfo(){
        cout << "Name : " << name  << endl;
        cout << "id : " << id  << endl;
        cout << "salary : " << salary  << endl;
        cout << "subject : " << subject  << endl;
        cout << "publications : " << publications  << endl;
    }
};
int main(){
    professor p ;
    p.name = "Hashim khan " ;
    p.id = 45729 ;
    p.salary = 25000 ;
    p.subject = "C++" ;
    p.publications = 25 ;

    p.getInfo();

    return 0 ;
}