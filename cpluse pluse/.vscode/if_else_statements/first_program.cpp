#include<iostream>
#include<string>
using namespace std ;

int main(){
    int menuchoice ;
    int item_quantity ;
    float price ;

    cout << "HELLO SIR . Well come in HKR.\n      MENU."<< endl;
    cout << "1. Burger . Rs:250"<< endl;
    cout << "2. Pizza . Rs:500"<< endl;
    cout << "3. sendwich . Rs : 150 "<< endl;
    cout << "4 .fries . Rs : 100 "<< endl;

    cout << "SIR, give me your  order . "<< endl;
    cin >> menuchoice ;
    cout << " How many items you will take . "<< endl;
    cin >> item_quantity ;
    
    switch(menuchoice){
    case 1 :
    cout << " you have ordered  " << item_quantity<<" burgers "<< endl;
    price = 250 ;
    cout <<"your total bill is :" << item_quantity*price << endl;
    break ;

    case 2:
    cout << " you have ordered " << item_quantity << " pizza "<< endl;
    price = 500 ;
    cout << " your total bill is :"<< item_quantity*price << endl ;
    break ;

    case 3:
    cout <<" you have ordered "<< item_quantity << " sendwich "<< endl;
    price = 150 ;
    cout <<" your total bill is :" << item_quantity*price  << endl;;
    break ;

    case 4:
    cout << " you have ordered "<< item_quantity << " fries " << endl;
    price = 100 ;
    cout <<"your total bill is :"<<  item_quantity * price << endl ;
    break ;

    default:
    cout << " sorry , you have enter wrong order :" << endl;;
    }
    int total_bill = price * item_quantity ;

     if(item_quantity >= 5){
     total_bill = total_bill -total_bill *0.10;
     cout << " you get 10% discount , your updated bill is : " << total_bill << endl;}
     
    
    return 0;
    
}