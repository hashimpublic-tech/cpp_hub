#include<iostream>
using namespace std ;
class Account{
    private:
    float balance ;
    string password ;
    public:
    int id ;
    string username ;

    //setter
    void setBalance( double balnce){
        balance = balnce ;
    }
    void setPassword( string pass){
        password = pass ;
    }

    //getter
    double getBalance(){
        return balance ;
    }
    string getPassword(){
        return password ;
    }
};

int main(){
    Account a1;
    a1.id = 45729 ;
    a1.username = "hashimkhan";
    a1.setBalance(25000) ;
    a1.setPassword("hashim") ;

    cout << "id:"<< a1.id << endl;
    cout << "username:" << a1.username << endl;
    cout << "balance:"  << a1.getBalance() << endl;
    cout << "password:" << a1.getPassword() << endl;
    
    return 0 ;
}