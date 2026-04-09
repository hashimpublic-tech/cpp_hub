// 5️⃣ Car Showroom
// Create a structure Car with:
// brand
// model
// price

// Task:
// Input 5 cars.
// Display the cheapest car.



#include<iostream>
#include<climits>
using namespace std ;
struct car{
    string brand ;
    int model ;
    int price  ;
};
void function( car c1[]){
    string cheapName ;
    int cheapModel ;
    int cheapCar = INT_MAX ;

    cout << "Cheapest Car :" << endl;
    for( int i=0 ; i<2 ; i++){
        
        if(c1[i].price < cheapCar){
            cheapCar = c1[i].price ;
            cheapName = c1[i].brand ;
            cheapModel = c1[i].model ;
        }
    }

    cout << "Brand : " << cheapName << endl;
    cout << "Model : " << cheapModel << endl;
    cout << "Price : " << cheapCar << endl;
 }
 int main(){
    car c1[2];
    cout << "\nEnter Data For Cars \n" << endl;

    for( int j=0 ; j<2 ; j++ ){
        cout << "Enter car brand : " ;
        getline(cin >> ws , c1[j].brand);

        cout << "Enter car model : " ;
        cin >> c1[j].model ;
        
        cout << "Enter car price : " ;
        cin >> c1[j].price ;

        system("cls");
    }
    function(c1);

    return 0 ;
 }