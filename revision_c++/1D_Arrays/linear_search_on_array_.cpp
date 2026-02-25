#include<iostream>
using namespace std ;
void LinearSearch( int array[] , int size , int target  ){
    bool isfind = false ;

    for( int i=0 ; i<size ; i++ ){
        if( array[i] == target)
        {
            isfind = true ;
            break ;
        }
    }
    if( isfind == true ){
        cout << " Target Found : " << endl;
    } else {
        cout << " Target Not Found : " << endl;
    }
}
int main(){
    int array[6]={ 1 , 2 ,3  , 4, 5 , 6} ;
    int size = 6 ;
    int target = 4 ;

    LinearSearch( array , size  , target ) ;

    return 0 ;
}