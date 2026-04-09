#include<iostream>
using namespace std ;
struct bookData{
    string bookName ;
    string writerName ;
    int bookPrice ;
};
void function(bookData b[2] ){
    string maxBookName ;
    string maxWriterName ;
    int maxBookPrice = 0 ;

    for( int i=0 ; i<2 ;  i++ ){
        cout << "Enter Data For Book " << i+1 << endl;
        cout << "Enter Book Name : " ;
        getline(cin >> ws , b[i].bookName ) ;

        cout << "Enter writer Name : " ;
        getline(cin >> ws , b[i].writerName ) ;

        cout << "Enter Book Price : " ;
        cin >> b[i].bookPrice ;
        system("cls") ;

        if(b[i].bookPrice > maxBookPrice ){
            maxBookPrice = b[i].bookPrice ;
            maxWriterName = b[i].writerName ;
            maxBookName = b[i].bookName ;
        }

    }
    cout << "Book Name : " << maxBookName << endl;
    cout << "Writer Name : " << maxWriterName << endl;
    cout << "Book Price : " << maxBookPrice << endl;
    
}
int main(){
    bookData b[2] ;
    function(b) ;
    return 0 ;

}