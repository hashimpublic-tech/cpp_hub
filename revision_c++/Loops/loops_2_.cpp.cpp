#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int number ;
    float sum = 0 ;

    for(int i = 1 ; i <=n ; i++){

        cout << " enter nuber : " << endl;
        cin >> number ;

        sum+=number ;
    }cout << " its the sum of all these numbers : " << sum << endl;
    cout << " its the avg of all these numbers : " << sum/n << endl;
    return 0 ;
}