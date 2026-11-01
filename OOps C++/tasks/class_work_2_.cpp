// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;
 
class GrandParent{

    public:

    void DisplayGp(){

    cout<<"I am A grand Parent"<<endl;

    }

};
 
class Parent : public GrandParent{

    public:

    void DisplayP(){

    cout<<"I am A Parent"<<endl;

    }

};

class Child : public Parent{

    public:

    void DisplayC(){

    cout<<"I am A Child"<<endl;

    }

};
 
int main() {

    GrandParent gp;

    Parent p;

    Child c;

    gp.DisplayGp();

    p.DisplayGp(); //inherited function

    p.DisplayP(); //own function

    c.DisplayC(); //own function

    c.DisplayP();//inherited function

    c.DisplayGp();//inherited from grand parent
 
    return 0;

}
 