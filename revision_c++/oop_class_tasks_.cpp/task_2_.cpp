#include<iostream>
using namespace std ;
int main(){
int array[5] ;
int sum = 0 ;
float average = 0  ;

for( int i=0 ; i<5 ; i++ ){
    cout << "enter subject " << i+1 << " marks : " ;
    cin >> array[i] ;

    sum+=array[i] ;
}


average = sum ;
cout << "\n sum of numbers is : " << sum << endl;
cout << " average of your marks is : " << average/5 << "\n"<< endl;

for( int i=0 ; i<5 ; i++ ){
    if( array[i] >= 50 ){
        cout << " subject " << i+1 << " is passed : " << endl;
    }
    else{
        cout << " subject " << i+1 << " is fail : " << endl;
    }
}
return 0 ;

 
}