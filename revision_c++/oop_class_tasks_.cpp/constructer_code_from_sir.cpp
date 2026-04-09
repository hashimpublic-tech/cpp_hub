// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;
 
class Person{

    public:

    string name;

    public:

    Person(){ //default construtor

        name = "Unknown";

        cout<<"Default Name is "<<name<<endl;

    }

    Person(string n){

        name = n;

        cout<<"Parameterized Name is "<<name<<endl;

    }

};
 
int main() {

    Person p; //Default constructor is called here

    //whenever you create any object, construtor will be called

    cout<<"Updated name: "<<p.name<<endl;

    Person p2("Abbas"); //parameterized constructor called here

    p.name = "Ali";

    cout<<"Updated name: "<<p.name<<endl;

    return 0;

}
 