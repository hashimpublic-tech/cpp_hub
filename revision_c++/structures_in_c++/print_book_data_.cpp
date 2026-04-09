#include<iostream>
using namespace std ;
struct book{
    string bookName ;
    string writerName ;
    int bookPrice ;
} ;
int main(){
    book b[2] ;

    cout << "Enter Data For Books\n";
    for( int i=0 ; i<2 ; i++ ){
        cout << "Enter Book " << i+1 << " Data\n ";

        cout << "Enter book Name : " ;
        getline(cin >> ws , b[i].bookName );

        cout << "Enter writer Name : " ;
        getline(cin >> ws , b[i].writerName ) ;

        cout << "Enter book Price : " ;
        cin >> b[i].bookPrice ;

        system("cls") ;
    }
    cout << "This IS the Informations About Books \n";
    for( int j=0 ; j<2 ; j++ ){
       
        cout << "\n\nBook Name : " << b[j].bookName << endl;
        cout << "Writer Name : " << b[j].writerName << endl;
        cout << "Book price : " << b[j].bookPrice << endl;

        
    }
    return 0 ;
}