// 🔹 1. Bank Account & Manager 💳
// Scenario:

// BankAccount keeps balance private.
// Manager class can access and update balance.

// Practice:
// Private balance
// Friend class can view/change it

#include<iostream>
using namespace std ;
class BankAccount{
    private:
    float balance = 100 ;
    public:
    void setBalance(){
        balance = 2500 ;
    }
    friend class Manager ;
};
class Manager{
    public:
    void getBalance(BankAccount b){

        b.setBalance();
        cout << "Balance : " << b.balance << endl;
        
    }
};
int main(){
    BankAccount b ;
    Manager m ;
    m.getBalance(b);
}