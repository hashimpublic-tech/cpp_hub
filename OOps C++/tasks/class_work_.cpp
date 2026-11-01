// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;

class vehicle{

    public:

    string brand;

    string reg;

    void drive(){

        cout<<"Vehicle is Driving"<<endl;

    }

    void displayVehicle(){

        cout<<"Brand: "<<brand<<endl;

        cout<<"Reg No: "<<reg<<endl;

    }

};

class Car :  public vehicle{ //syntax of inheritance

    public:

    string type;

    void Start(){

        cout<<"Car Engine is Starting"<<endl;

    }

    void Lock(){

        cout<<"Car doors have been locked"<<endl;

    }

    void showType(){

        cout<<"Car Type: "<<type<<endl;

    }

};
 
int main() {

    //inherited features

    Car c;

    c.brand = "Honda";

    c.reg = "ISB1123";

    c.drive();

    c.displayVehicle();

    //Own Features

    c.type = "Auto";

    c.Start();

    c.Lock();

    c.showType();
 
    return 0;

}
 
 
 
 