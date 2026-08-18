#include<iostream>
using namespace std ;
int main(){
    int package ;
    int charges;
    
    cout << " enter your package weight "<< endl;
    cin >>  package ;

    if (package <= 5 ){
        cout << " up to 5 kg ,you have to Rs " << endl ; 
    } 
    else if
    (package >= 6 || package <= 10) {
        cout << " you have to pay Rs : 350 "<< endl;}
         else if 
         (package >= 11 || package <= 20)
         {cout << ""<< endl ;}
         else {
            cout << " " << endl ;
         } return 0 ;
         
} 




#include<iostream>
using namespace std ;
int main(){
     int salary ;
     int tax ;

     cout <<" enter your salary : " <<endl;
     cin >> salary ;

     if (salary >= 50000){
        cout<< " your salary is : " << salary <<endl;
        cout << " you will pay 5% taxfrom your salary : " << salary*0.05 << endl;
     } else if (salary >=30000 && salary < 50000){
        cout <<" your salary is  : " << salary << endl;
        cout <<" you will pay 3% tax from your salary : " << salary *0.03 << endl;
     }else{
        cout <<  " your salary is : " << salary << endl;
        cout << " you will pay 2% tax from your salary  : " << salary*0.02 << endl;
     } return 0 ;

}










