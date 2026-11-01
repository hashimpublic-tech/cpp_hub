#include<iostream>
using namespace std ;
class car{
    string brand ;
    int model ;

    public:
    void carDisplay(){
        brand = "BMW" ;
        model = 24 ;
        cout << "car brand : " << brand << endl;
        cout << "car model : " << model << endl;
    }
};
int main(){
    car c1;
    c1.carDisplay();
    return 0 ;
}