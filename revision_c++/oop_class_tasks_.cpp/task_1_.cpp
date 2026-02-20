#include<iostream>
using namespace std ;
int main(){
    int array[5] ;
    int sum =0 ;

    cout << " enter number to be inserted : " << endl;
    for( int i=0 ; i<5 ; i++ ){
        cin >> array[i] ;
        sum+=array[i] ;
    }
    cout << " sum of array numbers is : " << sum << endl;

    return 0 ;


}