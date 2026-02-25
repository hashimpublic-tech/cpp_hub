#include<iostream>
using namespace std ;
int main(){
    int array[6] ;
    int target ;

    cout << " Assign Values To Array : " << endl;
    for( int i=0 ;i<6 ; i++ ){
        cin>> array[i] ;
    }

    cout << " Enter Target : " ;
    cin >> target ;

    for( int i=0 ; i<6 ; i++)
    {
        if( array[i] == target ){
            cout << " Target Found : " << i << endl;
            return 0 ;
        }
    }
    cout << " Target Not Found : " << endl;
    return 0 ;
}