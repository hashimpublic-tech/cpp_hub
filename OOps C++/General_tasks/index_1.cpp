#include<iostream>
using namespace std ;
class Base{
    public:
    virtual void animal(){
        cout << "Base Class Calling\n";
    }
};
class Child : public Base {
    public:
    void animal(){
        cout << "Dog ! wobh wobh\n";
    }
};
class GrandChild : public Child{
    public:
    void animal(){
        cout << "Cat ! meow meow \n";
    }
};
int main(){
    Base* ptr ;
    Base b ;
    Child c ;
    GrandChild g ;

    ptr = &b ;
    ptr->animal();

    ptr = &c ;
    ptr->animal();

    ptr = &g ;
    ptr->animal();

    return 0 ;
}