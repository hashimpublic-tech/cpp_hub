// 2️⃣ Book Information

// Create a struct Book:
// title
// author
// price

// Task:
// Store details of 2 books
// Display the book with the highest price


#include<iostream>
using namespace std ;
struct bookDetails {
    string name ;
    string writer ;
    int price ;
} ;

int main(){
    bookDetails book1 ;
    book1.name = "atomic habits" ;
    book1.writer = "hashim khan :" ;
    book1.price = 700 ;

    cout << "\nBook1" << endl;
    cout << book1.name << endl;
    cout << book1.writer << endl;
    cout << book1.price << endl;
   


    bookDetails book2 ;

    book2.name = "48 laws of power" ;
    book2.writer = "zeeshan ahmad :" ;
    book2.price = 750 ;

    cout << "\nBook2" << endl;
    cout << book2.name << endl;
    cout << book2.writer << endl;
    cout << book2.price << endl;

    if( book1.price > book2.price )
    {
        cout << "\nHighest price book is :" << book1.price << "\n"<< endl;
    } else {
        cout << "\nHighest price book is :" << book2.price <<"\n"<< endl;
    }
    return 0 ;

}