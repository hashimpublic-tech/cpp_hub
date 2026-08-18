// 1️⃣ Student Record

// Create a struct Student with:
// name
// roll number
// marks


#include<iostream>
using namespace std ;

struct student{
    string name ;
    int id ;
    char section ;
    int marks ;
} ;

int main(){
    student hashim ;
    hashim.name = " hashim khan " ;
    hashim.id = 45729 ;
    hashim.section = 'C' ;
    hashim.marks = 450 ;

    cout << " name : " << hashim.name << endl;
    cout << " ID : " << hashim.id << endl;
    cout << " Section : " << hashim.section << endl;
    cout << " marks : " << hashim.marks << endl;

    return 0 ;
    
}
