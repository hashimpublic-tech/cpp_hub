#include<iostream>
using namespace std ;
class teacher{
    private:
    int salary ;
    public:
    string name ;
    string sub ;

    void setter(int sal){
        salary = sal ;
    }
    int getter(){
        return salary ;
    }

};
int main(){
    teacher t1;
    t1.name = "Hashim khan";
    t1.sub =   "C++" ;
    t1.setter(25000);

    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.sub << endl;
    cout << "Salary : " << t1.getter() << endl;

    return 0 ;
}