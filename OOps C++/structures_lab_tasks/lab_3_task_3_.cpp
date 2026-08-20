#include<iostream>
using namespace std ;
struct cars{
    string carName ;
    int carModel ;
    float carMileage ;
    string carColour ;

};
int main(){
    cars car[3];
    for( int i=0 ; i<3 ; i++){
        cout << "\n** Enter input for car " << i+1 << " **\n" ;

        cout << "Enter car name : " ;
        cin >> car[i].carName ;
        cin.ignore();
        
        cout <<"Enter car model : " ;
        cin >> car[i].carModel ;
        
        cout << "Enter car mileage : " ;
        cin >> car[i].carMileage ;
        
        cout << "Enter Car colour : " ;
        cin >> car[i].carColour ;
        system("cls");
    }

    for( int j=0 ; j<3 ; j++){
        cout << "== Car " << j+1 << " Properties ==" << endl;

        cout <<car[j].carName << endl;
        cout <<car[j].carModel << endl;
        cout <<car[j].carMileage << endl;
        cout <<car[j].carColour << endl;
        
    }
    return 0 ;

}