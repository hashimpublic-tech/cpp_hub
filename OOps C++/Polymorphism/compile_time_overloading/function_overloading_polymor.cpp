#include<iostream>
using namespace std ;
class showFunc{
    public:
    void show( int a ){
        cout << "int " <<  a << endl;
    }
    void show(char ch){
        cout << "char " << ch << endl;
    }
};
int main(){
    showFunc s1;
    s1.show(101);
    s1.show('H');

    return 0;

}