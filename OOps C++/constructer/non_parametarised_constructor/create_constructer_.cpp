#include<iostream>
using namespace std ;
class teacher{
    private:
    double salary ;
    public:
    // non-parameterised constructer ;
    teacher(){
        cout << "Hi, I am constructer"<< endl;
    }
    string name ;
    string dept ;
};

int main(){
    teacher a1;  // hereconstructer will call ;
    teacher a2 ;
    a2.name = "Hashim Khan" ;
    a2.dept = "Software Engineering" ;

    cout << a2.name << endl;
    cout << a2.dept << endl;

    return 0 ;
}