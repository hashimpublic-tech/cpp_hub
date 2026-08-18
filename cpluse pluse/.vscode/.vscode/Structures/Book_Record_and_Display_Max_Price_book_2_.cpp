#include<iostream>
#include<climits>
using namespace std ;
struct bookDetails{
    string name ;
    string writerName ;
    int price ;
};

int main(){

    int highestPrice = INT_MIN ;
    string bookName ;
    string writerName ;
    

    bookDetails book[2] ;

    for( int i=0 ; i<2 ; i++ ){
   
    cout << "\nDetails About book " << i+1 << endl;
    
    cin.ignore() ;
    cout << "Enter book name : " ;
    getline(cin,book[i].name) ;
    
    cout << "Enter writer name : " ;
    getline(cin,book[i].writerName) ;
    

    cout << "Enter book price : " ;
    cin >> book[i].price ;
    system("cls") ;

    }

    for( int i=0 ; i<2 ; i++ ){
        cout << "\nDetails of book " << i+1 << endl;
        cout << "Name : " << book[i].name << endl;
        cout << "Writer name : " << book[i].writerName << endl;
        cout << "Price : " << book[i].price << endl;

        if( book[i].price > highestPrice )
        {
            highestPrice = book[i].price ;
            bookName = book[i].name ;
            writerName = book[i].writerName ;
        } 
    }
    // to print highest price book details :
    cout << "\n == Details of Expensive Book == " << endl;
    cout << "\nHighest price of book is : " << highestPrice << endl;
    cout << "Highest price of book name is : " << bookName << endl;
    cout << "Highest price of book writer name is : " << writerName << endl;
    
   
    return 0 ;
}