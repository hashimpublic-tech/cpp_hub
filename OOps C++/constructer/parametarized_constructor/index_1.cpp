#include<iostream>
using namespace std ;
class zeeshan{
    public:
    string name ;
    int age;
    zeeshan(string n , int age ){
        name = n ;
        this -> age = age ;
    }
    void getInfo(){
        cout << "Name : " <<  name << endl;
        cout <<"age : " << age << endl;

    }};
int main(){
    zeeshan z("hashim khan",19);
    z.getInfo();

}