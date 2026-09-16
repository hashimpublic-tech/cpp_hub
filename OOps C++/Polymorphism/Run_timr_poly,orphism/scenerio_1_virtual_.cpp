// 🔹 1. Animal Sounds (Basic Start)

// 👉 Idea: Different animals make different sounds

// Base class: Animal → sound() (virtual)
// Derived: Dog, Cat, Cow

// ✅ Task:

// Use a base class pointer
// Store different animal objects
// Call sound()

#include<iostream>
using namespace std ;
class Base{
    public:
    virtual void animal(){
        cout << "Dog .. whob whob \n";
    }
};
class Child : public Base {
    public:
    void animal(){
        cout << "Cat .. meow meow \n";
    }
};
class grndChild : public Child {
    public:
    void animal(){
        cout << "Cow .. baaa! baaa! \n";
    }
};
int main(){
    Base* ptr ;

    Base b1 ;
    Child c1 ;
    grndChild gc1 ;

    ptr = & b1 ;
    ptr -> animal();

    ptr = & c1 ;
    ptr -> animal();

    ptr = &gc1 ;
    ptr -> animal();

    return 0; 
}