#include<iostream>
using namespace std ;
struct books{
    string bookName ;
    string writerName ;
    float bookPrice ;
};

void bookDetails( books b1[]){
    string expensiveName ;
    string expensiveWriter ;
    int expensivePrice = 0 ;

    cout << "\nDetails of Books : " << endl;

    for( int i=0 ; i<3 ; i++ ){
        cout << "\nBook : " << i+1 << endl;

        cout << "Book Name : " << b1[i].bookName << endl;
        cout << "Book Writer : " << b1[i].writerName << endl;
        cout << "Book Price : " << b1[i].bookPrice << endl;
        
        if( b1[i].bookPrice > expensivePrice){
            expensivePrice = b1[i].bookPrice ;
            expensiveName = b1[i].bookName ;
            expensiveWriter = b1[i].writerName ;
        }
    }

    cout << "\nDetails of Expensive book : " << endl ;
    cout << "*Book Name : " << expensiveName << endl;
    cout << "*Book writer : " << expensiveWriter << endl;
    cout << "*Book Price : " << expensivePrice << endl;

}
int main(){
    books b1[3] ;
    cout << "\nEnter books  Data : \n" << endl;
    for( int j=0 ; j<3 ; j++ ){
        cout << "Enter Data For Book " << j+1 << endl;

        cout << "Enter Book Name : " ;
        getline(cin >> ws ,b1[j].bookName );

        cout << "Enter Writer Name : " ;
        getline(cin >> ws , b1[j].writerName );

        cout << "Enter Book Price : " ;
        cin >> b1[j].bookPrice ;

        system("cls");

    }
    bookDetails(b1);
    return 0 ;
}
