#include<iostream>
using namespace std ;
struct book{
    string name ;
    int price ;
};
void function( book b[2]){
    string maxName ;
    int maxBook = 0 ;
   

    cout << " : Expensive Book : " << endl;

    for( int j=0 ; j<2 ; j++ ){

        if( b[j].price > maxBook ){
            maxBook = b[j].price ;
            maxName = b[j].name ;
        }
    }
    cout << " Name : " << maxName << endl;
    cout << " Price : " << maxBook << endl; 
}
int main(){

    book b[2];
    for( int i=0 ; i<2 ; i++ ){
        cout << "Enter data for book " << i+1 << endl;

        cout << "Enter Book Name : " ;
        getline(cin >> ws , b[i].name) ;

        cout << "Enter Name : " ;
        cin >>  b[i].price ;

        system("cls");

    }
    function(b);

    return 0 ;
}