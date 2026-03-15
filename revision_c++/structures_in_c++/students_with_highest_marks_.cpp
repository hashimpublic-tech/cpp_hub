#include<iostream>
using namespace std ;
struct student{
    string name ;
    int rollNumber ;
    int marks ;

};
int main(){
    string maxName ;
    int maxRollNumber ;
    int maxMarks = 0 ;

    student student[3];

    for( int i=0 ; i<3 ; i++ ){

        cout << "\nEnter details for student " << i+1 << "\n\n";
        
        
        cout << "*Enter name : " ;
        getline(cin >> ws, student[i].name);        // ws mean whitespace :
       

        cout << "*Enter roll number : " ;
        cin >> student[i].rollNumber ;

        cout << "*Enter marks : " ;
        cin >> student[i].marks ;
        system("cls");
        
        if( student[i].marks > maxMarks){
            maxMarks = student[i].marks ;
            maxName = student[i].name ;
            maxRollNumber = student[i].rollNumber ;
        }

    }
    
    for( int j=0 ; j<3 ; j++ ){
        
        cout << "\nDetails for student " << j+1 << "\n\n";
        cout << "Name : " << student[j].name << endl;
        cout << "rollNumber : " << student[j].rollNumber << endl;
        cout << "marks : " << student[j].marks << endl;
        
        
    }
       cout << "\nDetails of highest marks student :\n\n" ;
       cout << "Highest scorer Name : " << maxName << endl ;
       cout << "Roll number  : " << maxRollNumber << endl ;
       cout << "marks : " << maxMarks << endl ;

       return 0 ;

     
}
