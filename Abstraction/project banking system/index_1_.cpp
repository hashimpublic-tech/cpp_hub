#include<iostream>
using namespace std;
class BankAccount{
    public:
    virtual void deposite(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual void showBalance() = 0;
};
class SavingAccount : public BankAccount{
    private:
    int balance = 0;
    public:
    void deposite(int amount){
        balance = balance + amount;
        cout << "after deposite BAlance  : " << balance << endl;
    }
    void withdraw(int amount){
        balance = balance - amount ;
        cout << "After Withdraw balance : " << balance << endl;
    }
    void showBalance(){
        cout << "Current Balance : " << balance << endl;
    }
};
int main(){
    BankAccount* ptr ;
    SavingAccount s;

    ptr = &s ;
    ptr->deposite(2500);
    ptr->withdraw(500);
    ptr->showBalance();
}