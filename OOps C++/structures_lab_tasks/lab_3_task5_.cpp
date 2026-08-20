#include<iostream>
using namespace std ;
struct marksCal{
    int marks1 ;
    int marks2 ;
    int marks3 ;

    float calTotal(){
        return marks1+marks2+marks3;
    }
    float percentage(){
        return ( calTotal() * 100 )/ 300;
    }
};
int main(){
    marksCal m1 ;
    m1.marks1 = 79 ;
    m1.marks2 = 81 ;
    m1.marks3 = 91 ;

    cout << "Marks 1 : " << m1.marks1 << endl;
    cout << "Marks 2 : " << m1.marks2 << endl;
    cout << "Marks 3 : " << m1.marks3 << endl;

    cout << m1.calTotal() << endl;
    cout << m1.percentage() << endl;

    return 0 ;
}