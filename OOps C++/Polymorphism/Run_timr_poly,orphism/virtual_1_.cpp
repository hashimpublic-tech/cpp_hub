#include<iostream>
using namespace std ;
class base {
    public :
    virtual void hello(){
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
    base b1 ;      
    ptr = &b1;     // access classse by pointers ;
    ptr->hello();

    cout << "\n";

    base* ptr2 ;    
    child c1;        
    ptr2 = &c1 ;
    ptr2->hello();

    return 0 ;
}