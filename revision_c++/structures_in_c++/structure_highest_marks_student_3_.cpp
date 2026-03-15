#include<iostream>
using namespace std ;
struct student{
    string name ;
    int rollNumber ;
    int marks ;
};
void function( student s1[5] ){
    string highName ;
    int highId ;
    int highMarks = 0 ;

    

    cout << "\n*Details of Students :" << endl;

    for(int j=0 ; j<5 ; j++ ){
        cout << "\n\nDetails of Student " << j+1 << endl;

        cout << "Name : " << s1[j].name  << endl;
        cout << "roll Number : " << s1[j].rollNumber << endl;
        cout << "Marks : " << s1[j].marks << endl;

        if(s1[j].marks > highMarks ){
            highMarks = s1[j].marks ;
            highName = s1[j].name ;
            highId = s1[j].rollNumber ;
        }
    }

        cout << "\n**Details of position holder " << endl;

        cout << "*Name : " << highName << endl;
        cout << "Roll Number : " << highId << endl;
        cout << "Marks : " << highMarks << endl;

}
int main(){
    student s1[5];

    cout << "\nEnter Students Data : \n" << endl ;
    for( int i=0 ; i<5 ; i++ ){
        cout << "Enter data for student " << i+1 << endl;

        cout << "Enter Name : " ;
        getline(cin >> ws , s1[i].name );

        cout << "Enter roll Number : " ;
        cin >> s1[i].rollNumber ;

        cout << "Enter Marks : ";
        cin >> s1[i].marks ;

        system("cls");
    } 
    
    function(s1);
    return 0 ;
}