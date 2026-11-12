// 🧠 Task:
// Input marks of 5 subjects
// Calculate percentage
// Assign grade:
// A (≥80), B (≥60), C (≥40), Fail
// Show result

// 👉 Extra Challenge:
// Make a base class Student and derived class Result


#include<iostream>
using namespace std ;
class student{
    protected:

    string name ;
    int rollNo ;

    public:

    void inputStudent(){
        cout << "Inter Name : " ;
        getline(cin >> ws , name ) ;
        cout << "Inter Roll Number : " ;
        cin >> rollNo ;
    }
    void displayStudent(){
        cout << "\nName Of Student IS : " << name << endl;
        cout << "Roll Number Of Student Is : " << rollNo << endl;
    }
};
class result : public student {
    public:

    int marks[5];
    float percentage ;
    char grade ;

   void inputMarks(){
    for( int i=0 ; i<5 ; i++){
        cout << "Inter Subject " << i+1 << "Marks : " ;
        cin >> marks[i]; 
    }
 }
    void parcentage(){
        int totalMarks = 0 ;
        for( int i=0 ; i<5 ; i++ ){
            totalMarks+=marks[i];
            
        }

         percentage = totalMarks / 5.0 ;

         if(percentage >= 80 ){
            grade = 'A' ;
         } else if(percentage >= 60){
            grade = 'B' ;
         } else if (percentage >= 50 ){
            grade = 'C' ;
         } else {
            grade = 'F' ;
         }
    }
    void displayResult(){
        displayStudent();
        cout << "\nResult Of Student :\n\n";
        for( int j=0 ; j < 5 ; j++){
            cout << "Marks in subject " << j+1 << " : " << marks[j] << endl; 
        }
        cout << "Percentage : " << percentage << "%" << endl;
       // cout << "Total Marks : " << totalMarks << endl;
        cout << "Grade : " << grade << endl;

        if(grade == 'F'){
            cout << "Your Are Fail : " << endl;
        }
        
    }
};
int main(){
    result r ;
    r.inputStudent();
    r.inputMarks();
    r.parcentage();
    r.displayResult();

    return 0 ;
}