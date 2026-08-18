/*#include<iostream>
using namespace std ;
int main(){
    int n = 15 ;
    int sum = 0 ;

    for(int i = 1 ; i <= n ; i++){
        if ( i%2 == 0 ){
            cout << " its a odd number :  " << i << endl;
            sum+=i;
        }
    }cout << " sum of current odd numbers : " << sum << endl;
    return 0 ;
}*/





/*#include<iostream>
using namespace std ;
int main (){
    int sum = 0 ;
    int i = 1 ;
    int  n = 10 ;
    while(i < n ){
        i++ ;
        if(i%2 == 0 ) {
            cout << " its a  odd number : " << i << endl; 
        } sum+=i ;
    }cout <<  " sum of current odd numbers : " << sum << endl;
    return 0 ;
}*/





/*#include<iostream>
using namespace std ;
int main(){
    int n = 3 ;
    for(int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= i ; j++ ){
            cout << ( i + j ) << " " ; 
        } cout << endl; 
    }
    return 0 ; 
}*/



#include<iostream>
using namespace std ;

int main (){
    int marks ;
    int income ;

    cout << " enter your marks : " << endl ;
    cin >> marks ;
    cout << " enter your income : " << endl ;
    cin >> income ;
    
    if (marks >= 85){
        if(income < 40000)
        cout << "congratulations , you get 100% scholorship. \n ";
        else if (income <= 70000 && income >= 40000)
        cout << " you get 50% scholership . \n ";
        else 
        cout << " no scholership . \n ";}
    
    else if (marks >= 70 && marks < 85){
        if (income < 50000)
            cout << " you get 25% scholership . \n";
        
    }else { cout << "no scholership . " ;}
    
}
