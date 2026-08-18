#include<iostream>
using namespace std ;
int main (){
    int n = 10 ;
    int i = 1 ;
    int sum = 0;
    while (i <= n){
        i++;
        cout << " number : " << i << endl;
        
        sum+=i ;

    }  cout << " sum of current nmbers : " << sum << endl;
    return 0 ;
}



#include<iostream>
using namespace std ;
int main(){
    int sum = 0 ;
    
    int  a ;
    int  b ;
    char op ;


  cout << " enter a number : " << endl;
  cin >> a;
  cout << " perform operation : " << endl;
  cin >> op ;
  cout << " enter second number : " << endl;
  cin >> b ;

  for(int i = 1 ; i <= a ; i++)
     if (op == '='){
        sum += i ;
        cout << sum << endl; 
     }
  if ( op == '+'){
    cout << " sum of current numbers is : " << a+b << endl;
 } else if(op == '-'){
    cout << " subtraction of current number is : "<< a-b << endl;
 } else if(op == '*'){
    cout << " multiplication of current numbers is : " << a*b << endl;
 }else if (op == '/'){
    cout << " division of current numbers is : " << a/b << endl;
 }else if (op == '%'){
    cout << " modulo of entered number : " << a%b << endl;
 }else {
    cout <<" invalid input \" TRY AGAIN \" " << endl; 
 }return 0 ;

}