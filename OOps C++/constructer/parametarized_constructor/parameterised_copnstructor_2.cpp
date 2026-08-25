#include<iostream>
using namespace std ;
class teacher{
    public:        // access modefier :   1.public ,2. private ,3. protected :
    teacher(){
        cout << "Hi , I am constructor\n" ;
    }

    string name ;
    string dept ;
    string sub ;
    double salary ;

    teacher(string n , string d ,string s , double sal){
        name = n ;
        dept = d ;                 // parameterized constructer : 
        sub = s ;
        salary = sal ;
    } 

    void display(){
        cout << name << endl;
        cout << dept <<endl ;
        cout << sub << endl;
        cout << salary << endl;
    }
};
int main(){

    teacher t4 ;      // to print non-parameterized constructor .

    teacher t1( "Hashim khan" ,"SE" ,"C++" ,25000) ;
    t1.display();                   // display using function : easy ;
    cout <<"\n" ;

    teacher t2("zeeshan pokie" , "SE" ,"C++" , 150) ;
    cout << t2.name << endl;                // display manually : 

    teacher t3("naina" ,"SE" , "C++" , 25000) ;
    t3.display() ;
    cout << "\n" ;

    return 0 ;
}