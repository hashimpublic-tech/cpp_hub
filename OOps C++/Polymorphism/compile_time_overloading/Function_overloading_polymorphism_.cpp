#include<iostream>
using namespace std ;
class showFunction{
    public:
    int add( int a , int b ){
        return (a+b);
    }
    int add(int a , int b , int c){
        return (a+b+c);
    }
};
int main(){
    showFunction f1;
    cout << f1.add(2,3) << endl;
    cout << f1.add(2,3,4) << endl;

    return 0 ;

}