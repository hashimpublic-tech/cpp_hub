#include<iostream>
using namespace std ;
class Base {
    private:
    int balance = 2500 ;

    void setBalance(){
        balance = 5000 ;
    }
    friend class Child ;
};
class Child : public Base {
    public:
    void print( Base obj){
        obj.setBalance();
       
        cout << "Balance : " << obj.balance << endl;
    }
};
int main(){
    Base obj ;
    Child c ;
    c.print(obj);

    return 0;
}