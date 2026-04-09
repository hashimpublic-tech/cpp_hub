#include<iostream>
using namespace std ;
struct student{
    string name ;
    int rollNumber ;
    int marks ;
};
void Function(){
    student s1[5];
    int highId ;
    int highMarks = 0  ;
    string highName ;

    for( int i=0 ; i<5 ; i++){
        cout << "Enter student " << i+1 << " marks ::" << endl;

        cout << "Enter name : " ;
        getline(cin >> ws , s1[i].name );

        cout << "Enter roll number : " ;
        cin >> s1[i].rollNumber ;

        cout << "Enter marks : " ;
        cin >> s1[i].marks ;

        system("cls");
    }
    cout << "\n: Student Details :" << endl ;
    for( int j=0 ; j<5 ; j++ ){

        cout << "\nDetails of student " << j+1 << endl;

        cout << "Name : "<< s1[j].name << endl;
        cout << "Roll Number : "<< s1[j].rollNumber << endl;
        cout << "Marks : "<< s1[j].marks << endl;

        if(s1[j].marks > highMarks){
            highMarks = s1[j].marks ;
            highName = s1[j].name ;
            highId = s1[j].rollNumber ;
        }
        cout << "\n: position Holder Details :" << endl;
        cout << "*Name : " << highName << endl ;
        cout << "*Roll Number : " << highId << endl;
        cout << "*Marks : " << highMarks << endl;
    }
}
int main(){
    
    Function();

    return 0 ;
}