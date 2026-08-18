/*#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 2;
 
    while(i <= 20){
    cout << i <<"*"<< n <<"="<<i*n << endl;
    i++;}
    
    return 0; 
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 10;
    for(int i = 1 ; i <= 10 ; i++ ){
        cout << i <<"*"<< n << "=" << i*n << endl;
    }return 0;
}*/


/*#include<iostream>
using namespace std;

int main(){
    int n = 50;
    for(int i = 1 ; i <= n ; i=i+2){
        cout << i << endl;
    } return 0;
}*/


/*#include<iostream>
using namespace std ;

int main (){
    int sum = 0 ;
    for(int i=1 ; i<=10 ;i++){
        sum+=i ;
        cout << "the sum is : "<< sum << endl;
    } return 0;
}*/




/*#include<iostream>
using namespace std ;

int main(){
    int i = 1 ;
    int sum = 0 ;
    int n = 10 ;

    while(i <= n){
        i++ ;
        sum += i;
        cout << sum << endl;
    } return 0;
    
     return 0; 
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n = 50 ;
    int sum = 0;
    

    for(int i = 1 ; i <= n ;i++){
        sum += i;
          if(i == 5) {
          break ;}
 }    cout << sum << endl;
    return 0 ;
}*/

      

//nested loop*********** 



/*#include<iostream>
using namespace std ;

int main(){
    int n = 50 ;
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            cout << "number is even : "<< i << endl;
        }else {
            cout << "number is odd : "<< i << endl;
        }
    }
    return 0 ;
} */
 




/*
#include<iostream>
using namespace std ;
int main(){
    int n = 50 ;
    for(int i = 1 ; i <= n ; i++){
        if (i % 2 != 0){
         cout << "number is odd : "<< i<< endl;
        }
    }return 0;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 50 ;
    int oddSum = 0 ;
    for (int i = 1 ; i <= n ; i++){
        if( i%2 != 0){
            oddSum += i ;
            cout << oddSum << endl;
        }

    }return 0;
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n = 15 ;
    int oddSum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        if(i%2 != 0){
         oddSum += i ;
         cout <<"odd number :"<< i << endl;
         }
    }cout << "sum of current numbers :"<< oddSum << endl;
    return 0;
}*/



/*    #include<iostream>
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
    }*/




#include<iostream>
using namespace std ;
int main(){
    int  n ;
    bool isprime = true ;

    cout << " enter a number to check prime or not : "<< endl;
    cin >> n ;

    for(int i = 2 ; i <= n-1 ; i++){
        if(n%i == 0 ){
            isprime = false ;
            break ; 
        }
        }if(isprime ==true ){
            cout << " number is prime : " << n << endl; 
        } else {
            cout << " number is non prime : " << n << endl;
        }return 0 ;
    }


        


    
