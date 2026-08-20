#include<iostream>
using namespace std ;
struct car{
    string brand ;
    int model ;

    void displaycar(){
        cout << "Brand : "<< brand << endl;
        cout << "model : " << model << endl;
    }
};
int main(){
    car c1 ;
    cout << "\nCar properties \n" ;

    c1.brand = "lexus";
    c1.model = 25 ;
    c1.displaycar();
    
    cout << "\n" ;
}
