// 🔹 2. Student & Teacher 👨‍🏫
// Scenario:

// Student has private marks.
// Teacher class can access marks to calculate grade.

// Practice:
// Show marks
// Calculate percentage
// Assign grades


#include<iostream>
using namespace std ;
class StudentMarks{
    private :
    int marks = 450 ;

    friend class Teacher ;
};
class Teacher{
    public:
    void Result(){
        StudentMarks s ;
        int percentage = (s.marks*100)/500 ;

        cout << "Marks : " << s.marks << endl;
        cout << "percentage : " << percentage << endl;

        if(percentage >= 80 ){
            cout << "Grade : A \n" ; 
        } else if (percentage >= 60 ){
            cout << "Grade : B \n"; 
        } else if (percentage >= 50){
            cout << "Grade : C \n";
        } else {
            cout << "Fail\n";
        }
    }
};
int main(){
    Teacher t ;
    t.Result();
}