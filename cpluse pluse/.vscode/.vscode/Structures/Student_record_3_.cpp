// 1️⃣ Student Record

// Create a struct Student with:
// name
// roll number
// marks

// Task:
// Take input for 3 students
// Print their details

#include<iostream>
using namespace std ;
struct studentRecord {
    string name ;
    int id ;
    char section ;
    float gpa ;
    bool enrolled ;
} ;

int main(){
    char choice ;

    while( true ){

    studentRecord hashim ;

    cin.ignore() ;
    cout << " enter name  : " ;
    getline( cin , hashim.name ) ;
     
    cout << " enter id : " ;
    cin >> hashim.id ;

    cout << " enter section : " ;
    cin >> hashim.section ;

    cout << " enter gpa : " ;
    cin >> hashim.gpa ;

    cout << " true for enrolled false for no : " ;
    cin >> hashim.enrolled ;

    system( " cls ") ;
    
// to print data :
    cout << "\n Details About " << hashim.name << endl;
    cout <<" name : " <<  hashim.name << endl;
    cout << " ID :  " << hashim.id << endl;
    cout << " section : " << hashim.section << endl;
    cout <<"gpa : " <<  hashim.gpa << endl;
    cout << hashim.enrolled << endl;
    
    cout << " Do you want to continue program ( y/n ) " ;
    cin >> choice ;

    if( choice == 'n' || choice == 'N'){
        break ;
    }
    system( " cls ") ;

    }
    return 0 ;
}