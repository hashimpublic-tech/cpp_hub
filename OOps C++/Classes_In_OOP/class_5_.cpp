/*
#include<iostream>
using namespace std ;
class teacher {
    
    public:
    string name ;
    string dept ;
    string sub ;
    double salary ;

};
int main(){
    teacher t1;
    t1.name = "zeeshan koni" ;
    t1.dept = "SE" ;
    t1.sub = "C++" ;
    t1.salary = 2500 ;

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.sub << endl;
    cout << t1.salary << endl;
    
    
}*/
#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    string name;
    string dept;
    string sub;
    double salary;
};
int main()
{
    teacher t1;
    t1.name="hashim spae";
    t1.dept="computer science";
    t1.sub="science";
    t1.salary=25000;

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.sub<<endl;
    cout<<t1.salary<<endl;
    return 0;
}