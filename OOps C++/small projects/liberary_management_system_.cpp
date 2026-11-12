#include<iostream>
using namespace std ;
class Book{
    protected:
    string books[3]={"math" , "physics" , "biology"};
    bool available[3]={true,true,true};

    public:
    void showBooks(){
        cout << "\n***************\n";
        for( int i=0 ; i<3 ; i++){
            cout << i+1 << " : " << books[i]<< endl;
        }
        cout << "\n***************\n";
    }
    void issuedBook(){
        int bookCh ;
        cout << "Enter Book Number : " ;
        cin  >> bookCh ;

        if(bookCh >= 1 && bookCh <=3 ){
            if(available[bookCh-1]){
                available[bookCh - 1 ] = false ;

                cout << "\nBook Issued SuccessFully : " << endl;
            } else {
                cout << "\nBook Not Available : \n"; 
            }
        } else {
            cout << "\nWrong Number : " << endl;
        }
    }
    void returnBook(){
        int bookCh ;
        cout << "Enter Book Number : \n";
        cin >> bookCh ;

        if(bookCh >= 1 && bookCh <= 3 ){
            
                available[bookCh-1] = true ;

                cout << "\nBook Return SuccessFully\n" ;
            
            
        } else {
                cout << "\n wrong Book Number\n";
        }

    }
};
class Student : public Book {
    protected :
    string name ;

    public:

    void inputStudent (){
        cout << "Name : " ;
        getline(cin >> ws , name );

    }
    void menu(){

        int menuChoice ;
        do{
            cout << "\n1 For Show Book \n2 For Issued Book \n3 For Return Book \n";
            cout << "Enter Your Choice : " ;
            cin >> menuChoice ;
            system("cls");

            switch(menuChoice){
                case 1 : showBooks();  break;
                case 2 : issuedBook(); break;
                case 3 : returnBook(); break;
                case 4 : cout << ":thanks:" << endl; break ;
                default: cout << "\nInvalid Input :" << endl; break ; 
            }
        }
        while(menuChoice != 4);
        
    }
};
class Teacher : public Book {
    protected :
    string name ;

    public:
    void inputTeacher (){
        cout << "Name : " ;
        getline(cin >> ws , name );
    }

    void menu(){

        int menuChoice ;
        do{
            cout << "\n1 For Show Book \n2 For Issued Book \n3 For Return Book \n";
            cout << "Enter Your Choice : " ;
            cin >> menuChoice ;
            system("cls");


            switch(menuChoice){
                case 1 : showBooks();  break;
                case 2 : issuedBook(); break;
                case 3 : returnBook(); break;
                case 4 : cout << ":thanks:" << endl; break ;
                default: cout << "\nInvalid Input :" << endl; break ; 
            }
        }
        while(menuChoice != 4);
        
    }
};

int main(){
    int choice ;

    cout << "1 For Student : \n2 For Teacher : \n" ;
    cout << "Enter Your Choice : " ;
    cin >> choice ;
    system("cls");

    if(choice == 1 ){
        Student s1 ;
        s1.inputStudent();
        s1.menu();
    } else if (choice == 2){
        Teacher t1 ;
        t1.inputTeacher();
        t1.menu();
    } else {
        cout << "\nWrong Input :\n";
    }

    return 0 ;

}