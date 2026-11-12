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
    int id ;

    public:
    void inputStudent(){
        cout << "Inter Name : " ;
        getline(cin >> ws , name ) ;
        cout << "Inter Id : " ;
        cin >> id ; 
     }
     void displayStudent(){
        cout << "\nName : " << name << endl;
        cout << "ID : " << id << endl;
     }
};
class result : public student {
    public :
    int marks[5] ;
    float percentage ;
    char grade ;

    void inputMarks(){
        for(int i=0 ; i<5 ; i++ ){
            cout << "Inter S" << i+1 << " Marks : " ;
            cin >> marks[i];
        }
    }
    void calPercentage(){
         int totalMarks = 0 ;
        for( int i=0 ; i<5 ; i++ ){
            
        
            totalMarks += marks[i];
        }

        percentage = totalMarks / 5 ;

      
    }
    void calGrades(){
        if(percentage >= 80){
            grade = 'A' ;
        } else if (percentage >= 60){
            grade = 'B' ;
        } else if (percentage >= 50 ){
            grade = 'C' ;
        } else {
            grade = 'F' ;
        }
        
    }

    void displayResult(){
        displayStudent();

        cout << "\nResult : " << endl;

        for( int i=0 ; i<5 ; i++ ){
            cout << marks[i] << " ";
        }
        cout << "\nPercentage : " << percentage << endl;
        cout << "Grade : " << grade << endl;  

        if( grade == 'F'){
            cout << "You Are Fail :" << endl;
        }
    }
   
};

int main(){
    result r ;
    r.inputStudent();
    r.inputMarks();
    r.calPercentage();
    r.calGrades();
    r.displayResult();

    return 0  ;


}