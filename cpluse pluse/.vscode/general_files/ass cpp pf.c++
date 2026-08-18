#include<iostream>
using namespace std ;
int main(){
    int packageweight ;
    int dileverycharges;
    
    cout << " enter your package weight "<< endl;
    cin >>  packageweight ;

    if (packageweight <= 5 ){
        cout << "packageweight is up to 5 kg ,you have to Rs : 200 " << endl ; 
    } 
    else if
    (packageweight >= 6 && packageweight <= 10) {
        cout << " you have to pay Rs : 350 "<< endl;}
         else if 
         (packageweight >= 11 && packageweight <= 20)
         {cout << "you have to pay Rs : 600 "<< endl ;}
         else {
            cout << " you have to pay Rs : 1000 ." << endl ;
         } return 0 ;
         
} 