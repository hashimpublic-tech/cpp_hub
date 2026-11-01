#include<iostream>
using namespace std ;
class student{
    public:
    string name ;
    int age ;
    
    public:
    void setName(string n ){
        name = n;
    }
    void setAge( int a){
        age = a ;
    }

    string getName(){
        return name ;
    }
    int getAge(){
        return age ;
    }};
    int main(){
        student s1 ;
        // s1.name = " hashim kahn" ;
        // s1.age = 19 ;

        cout << " name : " ;
        getline(cin >> ws,s1.name) ;
        cout << "age : " ;
        cin >> s1.age ;
        

        cout << "Name : " << s1.getName()<< endl;
        cout << "Age : " << s1.getAge() << endl;

        return 0 ;

    }