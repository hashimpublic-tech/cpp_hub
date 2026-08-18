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
    float gpa ;
} ;

int main(){
    // Using Stucture :
    student zeeshan;
    zeeshan.name = " zeeshan khan ";
    zeeshan.id = 45360 ;
    zeeshan.section = 'C' ;
    zeeshan.gpa  = 3.5 ;


    student hashim ;
    hashim.name = " hashim khan " ;
    hashim.id = 45729 ;
    hashim.section = 'C' ;
    hashim.gpa = 3.5 ;

    // print Data's
    cout << hashim.name << endl;
     cout << hashim.id << endl;
      cout << hashim.section<< endl;
       cout << hashim.gpa << endl;



    cout << zeeshan.name << endl;
     cout << zeeshan.id << endl;
      cout << zeeshan.section<< endl;
       cout << zeeshan.gpa << endl;



}