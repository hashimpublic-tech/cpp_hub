#include<iostream>
using namespace std ;
class zeeshan{
    public:
    string name ;
    int age ;

};
int main(){
    zeeshan z[3];
    for(int i=0 ; i<3; i++){
        cout << "Enter Name : ";
        getline(cin >> ws , z[i]. name );

        cout << "Enter age : " ;
        cin >> z[i].age ;
    }
    cout << "\n\n";
    for(int i=0 ; i<100 ; i++){
        cout << "\n";
        cout << "Data Of Student " << i+1 << endl;
        cout << "Name " << z[i].name << endl; 
        cout << "Age " << z[i].age  << endl;
    }
    return 0 ;

    // zeeshan z[100];
    // z[0].name = "Hahsim khan";
    // z[0].age = 19 ;

    // z[1].name = "zeeshan khan";
    // z[1].age = 18 ;

}