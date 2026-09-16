#include<iostream>
using namespace std ;
class base {
    public :
     void hello(){
    cout << "Parent Class :\n" ;
    }
};
class child : public base {
    public:
    void hello(){
        cout << "Child Class : \n";
    }
};
int main(){
    base* ptr ;
    base b1 ;     // here when we call class any of them the answer will base class 
    ptr = &b1;     // the we create the pointer of base class .
    ptr->hello();

    cout << "\n";

    base* ptr2 ;    // here when we call class any of them the answer will base class 
    child c1;        // the we create the pointer of base class .
    ptr2 = &c1 ;
    ptr2->hello();

    return 0 ;
}