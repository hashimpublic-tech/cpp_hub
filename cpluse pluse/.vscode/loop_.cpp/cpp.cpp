/*#include<iostream>
using namespace std ;
int main(){
    int n = 10;
    for(int i = 0; i <= n ;i++ ){
        cout << i <<" ";
    }return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int sum = 0 ;
    int i = 1;
    for(int i = 1;i<=5 ; i++ ){
        sum +=i;
        cout << " sum is :" << sum <<endl;
    }return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i = 1;
     for (int i=1; i<=10;i++){
        sum+=i;
        cout << "your sum of 10 numbers is :"<< sum << endl;
     }return 0;
} */


/*#include<iostream>
using namespace std ;
int main(){
    int i = 2;
    for(int i = 2 ; i <= 20 ; i+2){
        cout << i << " ";

        cout << endl;
    } return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i <= 10){
        cout << i << endl;
        i++ ;
    }return 0 ;
}*/




 /*#include<iostream>
 using namespace std ;
 int main (){
    char ch = 'a' ;
    cout << "enter a character:"<<endl;
    cin >> ch ;
    while( 'a' <= 'y' ){
        if('a'=='z')
        cout << "program terminated:"<< endl;
        break;
    }
    return 0;
 }*/
 /* #include<iostream>
 using namespace std ;
 int main(){
    char ch ;
    cout << "enter a character :"<< endl;
    cin >> ch ;

    while(ch>='a'){

        cout << "you entered character :"<<ch << endl;
        if(ch==0)
        cout << "program terminated "<< endl;
        break;
    }return 0;
 }*/

 /*#include<iostream>
 using namespace std ;
 int main (){
    int n;
    int fact = 1;
    cout << "enter a number to find their factorial : "<< endl;
    cin >>n;
    int i = 1;
    while (i <=n){
    
     fact *= i;
     i++;
     
     } cout << " factorail of: " << n << " is " << fact << endl;
     return 0;
 }
*/


/*#include<iostream>
using namespace std ; 
int main (){
    char ch ;
    int count = 0 ;


    while (true ){
        cout << " enter a character to print : " << endl;
        cin >> ch ;

        if(ch == '0') {
            cout << " program terminated : " << ch << endl;
            cout << " its the total character you entered : " << count << endl;
            break ; 
        } else {
            cout << " the character you entered is  : " << ch << endl;
        }count++;
    }return 0 ;
}*/


 
/*#include<iostream>
using namespace std ;
int main(){
    int ch ;

    cout << " enter a character : " << endl;
    cin >> ch ;

    if (ch >= 65 && ch <= 91){
        cout << " its upper case value : "  << ch << endl;
    }else if(ch >= 97 && ch <= 123) {
        cout << " its lower case value : " << ch << endl;
        
    }else{
        cout << " invalid address plz \" : please try again : \" : " << ch  << endl;
    }return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 10 ;
    int i = 1 ;

    do{
        cout << i << endl;
        i++ ;
    }while(i <= n);
    
  
}*/



/************************************************************* */



#include<iostream>
using namespace std ;

int add( int a , int b ){
    cout << ( a + b ) << endl;
    return a+b ;
}
int sub( int a , int b ) {
    cout << ( a - b) << endl;
    return a-b ;
}
int mul( int a  , int b ) {
    cout << ( a * b) << endl;
    return a*b ;
}
int divi( int a , int b ) {
    cout << ( a / b ) << endl;
    return a/b ;
}
int main(){

    int a ;
    int b ;
    
     cout << " enter num1 : " << endl;
     cin >> a ;
     cout << " enter numm2 : " << endl;
     cin >> b ;

     cout << add(a , b ) << endl;
     return 0 ;
}