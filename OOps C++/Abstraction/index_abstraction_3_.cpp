// class task : Date : 30 - april - 2026:

#include<iostream>
using namespace std ;
class Appliance{
    public:
    virtual void operate() = 0 ;
};
class Fan : public Appliance{
    public:
    void operate(){
        cout << "\n*Fan Is Operating\n";
    }
};
class WashingMachine : public  Appliance {
    public:
    void operate(){
        cout << "*Washing is Operating\n";
    }
};
class MicroWave : public Appliance {
    public:
    void operate(){
        cout << "*MicroWave Is Operating\n\n";
    }
};
int main(){
    Appliance* ptr[3] ;
    Fan f ;
    WashingMachine w ;
    MicroWave m ;

    ptr[0]=&f;
    ptr[1]=&w;
    ptr[2]=&m;

    for (int i=0 ; i<3 ; i++ ){
        ptr[i]->operate();
    }
}