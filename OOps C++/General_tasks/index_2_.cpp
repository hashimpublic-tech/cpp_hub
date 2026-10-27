#include<iostream>
using namespace std ;
class Base {
    private :
    int balance ;
    public:
    void set(int bal){
         balance =  bal ;
    }
    int get(){
        return balance ;
    }
};
int main(){
    Base b ;

    b.set(2500);
    cout << b.get();
}