/*#include<iostream>
using namespace std ;

int main(){
    short int months ;
    short int totalfees  ;

    cout << " how many months you want to pay : \n";
    cin >> months ;
    cout << "how much is yoour monthly fees : ";
    cin >> totalfees ;

    short int totalfee = months *totalfees ;

    if (months >= 6){
         totalfee = totalfee - totalfee * 0.15 ;
        cout << "you get 15% discount , you will pay :" <<totalfee<< endl;
     }else{
        cout << " you will pay full fee which is :" << months*totalfees << endl;}
       return 0 ;
}*/



/**************************************** */




/*#include<iostream>
using namespace std ;
int main(){

   int temp[3][7]={{12,32,54,34,23,43,23},{12,43,21,23,34,32,12},{23,32,34,42,14,13,45}} ;
   string city[]={ " isamabad " , " lahore " , " pindi "};
   string  days[]={ " monday" , "tuesday  " , " wednesday" , " thursday" , " friday " , "saturday" , " sunday "};

   for(int i = 0 ; i < 3 ;i++ ){

      cout << "*********" << " city name : " << city[i] <<"*******" << endl;

      for(int j = 0 ; j < 7 ; j++ ){
      cout << days[j]<< " : " << temp[i][j] << endl;
   }
   }
   

}
*/


/********************************************************************** */

// write a function to print greater number :  


/*#include<iostream>
using namespace std ;
int max( int a  , int b  ){
   if(a > b ){
      return a ;
   }else {
      return b ;
   }
    
    

} int main(){
   
   cout << max(22 , 23) << endl ;
return 0 ;}

*/


//************************************************************** */


/*#include<iostream>
using namespace std ;
 int area(int len , int wid){
    
   cout << " total area is : " << len * wid << endl;
   return 0  ;
    
}
int main(){
   int len , wid ;
   cout << " enter len : "  << endl;
   cin >> len ;
   cout << " enter wid : " << endl;
   cin >> wid ;

   cout << area(len , wid ) << endl;
   return 0 ;
}
*/


/****************************************************************** */


// write a function to check age is greater or less then 18 : 

/*#include<iostream>
using namespace std ;
int func( int a ){
   if( a >=18 ){
      cout << " eligibal for vote : " << endl;
   }else {
      cout <<" not eligibal : " << endl;
   }
   return a ;
 
}
int main(){
   int age ;
   
      cout << " enter your age : " << endl;
   cin >> age ;

   cout <<func(age) << endl;
   

   return 0 ;
}

*/




/********************************************************** */


#include <iostream>
using namespace std;

int main() {
    int days, sessions;
    string participants[7][10];

    cout << "* Enter days * : ";
    cin >> days;
    cout << "* Enter sessions per day * : ";
    cin >> sessions;
    
    for ( int i = 0 ; i < days ;  i++ ) {
        cout << "* Day " << i + 1 << " : " << endl; ;

        for (int j = 0; j < sessions; j++) {
            cout << "* Enter participant name for Session " << j + 1 << " : "  ;

            getline(cin , participants[i][j]);
        }
    }
    cout << "\n* Conference schedule table * " << endl; ;

    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ":" << endl;

        for (int j = 0; j < sessions; j++) {
            cout << " * Session " << j + 1 << " : " << participants[i][j] << endl ;
           
        }
    }
    return 0;
}