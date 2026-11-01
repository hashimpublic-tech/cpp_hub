#include<iostream>
using namespace std ;
class Base{
    private:
    int num1 = 0;
    protected:
    int num2 = 0;
    public:

    void A(){
        num1 = 100 ;
        num2 = 200 ;
    }
    friend class Child ;
};
class Child : public Base{
    public:
    void display(Base objB){
        objB.A();
        cout << "num1 : " << objB.num1 << endl;
        cout << "num2 : " << objB.num2 << endl;
    }
};
int main(){

    Base objB ;
    Child objC ;

    
    objC.display(objB) ;
}