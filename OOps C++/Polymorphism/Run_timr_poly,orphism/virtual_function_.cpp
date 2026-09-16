#include<iostream>
using namespace std ;
class Parent{
    public:
    virtual void hello(){
        cout << "Hello from Base class : \n";
    }
};
class Child : public Parent {
    public:
    void hello(){
        cout << "Hello From Child Class : \n";
    }
};
int main(){
    Child c1 ;
    c1.hello();

    Parent p1 ;
    p1.hello();

    return 0 ;
}