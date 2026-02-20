#include<iostream>
using namespace std ;
int main(){
    int n= 5 ;

    for( int i=0 ; i<n ; i++ )
    {
        //spaces :

        for( int j=0 ; j<n-i ; j++ ) {
            cout << " " << " " ;
        }
        // nums1 :
        for( int h=1 ; h<i+1 ; h++ ){
            cout << h << " " ;
        }
        // nums2 :
        for( int a=i+1 ; a>0 ; a-- ){
            cout << a << " " ;
        }
        cout << endl;
    }

    return 0 ;
}
