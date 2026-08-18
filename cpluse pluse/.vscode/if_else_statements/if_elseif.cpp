/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int m ;
    cout << " enter number 1 : " << endl;
    cin >> n ;
    cout << " enter number 2 to check which one is greater  : " << endl;
    cin >> m ;
    if(n>m){
        cout << " its a greatre number in both of them : " << n << endl;
    }else {
        cout << " its a greater number in both of them : " << m << endl;
    }return 0 ;
} */



/*#include<iostream>
using namespace std ;
int main(){
    int bill ;
    int disBill ;


    cout << " enter your current bill : " << endl;
    cin >> bill ;


    if(bill >= 5000) {
        cout << " your total bill is : " << bill << endl;
         disBill = bill*0.20 ;
        cout << " you get 20% discount which is  : "  << disBill << endl;
       
        cout << " your updated bill is  : "  << bill - disBill << endl;
    } else {
        cout << " your current bill is :  " << bill << endl;
        disBill = bill * 0.20 ;
        cout << " you get 10% discount which is :  " << disBill << endl;
        cout << " its your total bill : " << bill - disBill << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std  ;
int main(){
    string username ;
    int password ;

    cout << " enter username : " << endl;
    cin >> username ;
    cout << " enter your password :  "<< endl;
    cin >> password ; 

    if (username == "admin" && password == 1234) {
        cout << " your account is successfully login : " << endl;
    }else {
        cout << " you enter invalid address \" please try again \" : " << endl;
    }
}*/





/*#include<iostream>
using namespace std ;
int main(){
    int n1 ;
    char operation ;
    int n2 ;

    cout << " enter a number : " << endl;
    cin>> n1 ;
    cout <<" enter operation : " << endl;
    cin >> operation ;
    cout << " enter 2nd number  :  " << endl;
    cin >> n2 ;

    if(operation == '+'){
        cout << n1 + n2 ;
    }else if (operation == '-'){
        cout << n1-n2 ;
    }else if (operation == '*'){
        cout << n1*n2 ;
    }else if (operation == '/'){
        cout << n1/n2;
    }else if(operation=='%'){
        cout << n1%n2;
    }else {
        cout << " invalid address : " << endl;
    }
} */



/*#include<iostream>
using namespace std ;
int main (){
    int weather ;

    cout << " enter temprature rate : " << endl;
    cin >> weather ;

    if(weather > 35){
        cout << " the weather is  too hot : " << endl;

    } else if (weather >= 20 && weather < 35) {
        cout << " its normal weather : " << endl;
    }else {
        cout << " the weather is too cold : " << endl;
    }return 0 ;
}*/



/*#include<iostream>
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
}*/



/*#include<iostream>
using namespace std ;
 int main(){
    int sum = 0 ;
    int array[5];
    for(int i = 0 ; i < 5 ;i++){

        cout << " enter marks : " << endl;
        cin >> array[i] ;

        cout <<"its the subject marks : "  << array[i] <<endl;
        sum+=array[i] ;


    }cout << " avg: "  << sum/5 << endl;
    return 0 ;
 }*/



 #include<iostream>
 #include<conio.h>
 using namespace std ;
 int main(){

    
    int situation ;

    cout<< " emergency press : " << endl;
    cout << " 1 for cloudy  : \n0 for normal : \n"  << endl;
    cout << " enter situation button : " << endl;
    cin  >> situation ; 

    if( situation == 0 ){
        cout << " its normal condition : " << endl;
    }else if ( situation == 1 ){
        cout << " here is something emergency : " << endl;
        system( " color 0B");
    }

    return 0 ;

 }

 
