/*#include<iostream>
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
         
} */




/*#include<iostream>
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
*/





/*
#include<iostream>
using namespace std ;
int main(){
    int n = 4;
    int i = 1 ;

    while(i<=n){
        cout << i << " " ;
        i++ ;
    }cout << endl;
    return 0 ;
} 
    */




/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout <<" enter a number  : " << endl;
    cin >> n ;

    for (int i = 1 ; i<=10 ; i++ ){
        cout << i << " * " << n << " = " << i*n << endl;
        
    }return 0 ;
}

*/


/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << " enter a number to find their cube from 1- n : " << endl;
    cin >> n ;

    for (int i = 1 ; i<=n ;i++) {
        cout << " cube of " << i << " is :  " << i*i*i << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;

int main(){
    int n ;
    int sum = 0 ;
    cout << " enter a number to fine their sum from 1-n : " << endl;
    cin >> n ;
    for(int i = 1 ; i<=n ; i++){
        if(i%2 == 0){
        cout <<" you entered a number : " i << endl;
        sum+=i;}
    }cout << sum << endl;
    return 0 ;

}
    */




    #include<iostream>
    using namespace std ;
    int main(){
        int salary = 100  ;
        int time ;
        cout << " enter your work time : " << endl;
        cin >> time ;

        int pay = time*salary;

        if(time<=40){
            cout << " your salary become : "<< pay <<endl;

        }else{
            int overtime = time - 40;
            pay = salary*40 + overtime*salary*2 ;
            cout << " your total salary become : " << pay << endl;
        }
    }