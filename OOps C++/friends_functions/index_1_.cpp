#include<iostream>
using namespace std ;
class Base{
    private :
    int marks ;
    public:
    Base(){
        marks = 100 ;
    }
    friend void display( Base b );
};
void display(Base b){
    cout << "Marks : " << b.marks << endl;
}
int main(){
    Base b ;
    display(b);
    
    return 0 ;
}