#include<iostream>
using namespace std ;
int main(){
    int purchase;
    int totalBill ;
    cout << " enter your purchasige value : " << endl;
    cin >> purchase ;

    if(purchase >=10000 ){
        cout << " your purchasing value is : " << purchase  << endl;
        totalBill = purchase*0.30 ;
        cout << " you get 30% discount , you will pay : " << purchase - totalBill << endl;
    }else if(purchase >= 5000){
        cout << " your bill is  : " << purchase << endl;
        totalBill = purchase * 0.20 ;
        cout << " your updated bill is : " << purchase - totalBill << endl; 
    } else if ( purchase >= 2000){
        cout << " its your bill : " << purchase << endl;
        totalBill = purchase * 0.10 ;
        cout << " your updated bill is : " << purchase - totalBill << endl; 
    } else {
        cout << " its your total bill : " << purchase << endl;
    }return 0 ;
}