#include<iostream>
using namespace std ;
int calSum( int n ){
    int sum = 0 ;
    for( int i=1 ; i<=n ; i++ ){
        sum+=i ;
    }
    return sum ;
}
int main(){

    cout << calSum(4) << endl;
    cout << calSum(5) << endl;
    cout << calSum(6) << endl;
    cout << calSum(7) << endl;
    cout << calSum(10) << endl;
    return 0 ;
}