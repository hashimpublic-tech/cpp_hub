#include<iostream>
using namespace std ;
class ABC{
    public:
     static int x ;

    ABC(){
        x++;
    }

    static void fun(){
        cout << "You have created : " << x << " : objects" << endl;
    }
};
int ABC :: x = 0 ;
int main(){

    ABC :: fun();
    ABC x;
    x.fun();
    ABC y;
    y.fun();
    ABC z;
    z.fun();

    return 0 ;
    
}