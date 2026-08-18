#include<iostream>
using namespace std ;
struct car{
    string carName ;
    string brand ;
    int model ;
    float horsePower ;
    string colour ;
};
int main(){
    car c1 ;
    c1.carName = "Lexus 600";
    c1.brand = "Lexus" ;
    c1.model = 2024 ;
    c1.horsePower = 3500 ;
    c1.colour = "white" ;

    cout << "\n====================\n";
    cout << "Car Name :" << c1.carName << endl;
    cout << "Car Brand :" << c1.brand << endl;
    cout << "Car Model :" << c1.model << endl;
    cout << "Car Horsepower :" << c1.horsePower << endl;
    cout << "Car Colour :" << c1.colour << endl;
    cout << "====================\n\n";

    return 0 ;
}