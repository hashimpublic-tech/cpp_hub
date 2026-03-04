#include<iostream>
using namespace std ;

int CalMarks( int marks[]){
    int sum = 0 ;
    for( int i=0 ; i<5 ; i++ ){
        sum+=marks[i] ;
    }
    return sum ;
}
float CalPercentage( int total ){
    return ( total * 100 ) / 500;
}
char CalGrades( float percentage){
    
    if( percentage >= 80){
        return 'A' ;
    }
    else if(percentage >= 70){
        return 'B' ;
    }
    else if (percentage >= 60){
        return 'C' ;
    }
    else if( percentage >= 50){
        return 'D' ;
    } else {
        return 'F';
    }
}


int main(){

    int marks[5];
     
    for( int i=0 ; i<5 ; i++ ){
        cout << "Enter marks " << i+1 << endl;
        cin >> marks[i] ;
    }

    int total = CalMarks( marks ) ;
    float percentage = CalPercentage( total ) ;
    char grade = CalGrades(  percentage ) ;


    cout << "*total marks : " << total << endl;
    cout << "*percentage : " << percentage << endl;
    cout << "*grade : " << grade << endl;
 

    return 0 ;
}