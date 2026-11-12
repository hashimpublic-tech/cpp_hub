// 🔹 2. Bank Account System
// 💡 Scenario:

// A simple ATM system where users can deposit and withdraw money.

// 🔧 Concepts:
// if-else → check balance
// Functions → deposit(), withdraw()
// Encapsulation → hide balance
// Loops → menu system
// Inheritance → SavingAccount, CurrentAccount
// 🧠 Task:
// User selects:
// Deposit
// Withdraw
// Check Balance
// Prevent withdrawal if balance is low

// 👉 Real-life logic: Like ATM machine 🏧


#include<iostream>
using namespace std ;
class Account{
    protected:
    string name ;
    int number ;

    public:

    void inputUser(){
        cout << "Inter Name : " ;
        getline(cin >> ws , name ) ;

        cout << "Inter number : " ;
        cin >> number ;
        system("cls");
    }
    void outputUser(){
        cout << "\nName : " << name << endl;
        cout << "Number : " << number << endl ;

     }
};
class SavingAccount : public Account {
    private :
    float balance = 2500 ;
    public:

    void deposite(){
        float amount ;
        cout << "Inter Deposite Amount : " ;
        cin >> amount ;
        system("cls");

        if(amount > 0){
            
            balance = balance + amount ;
            system("cls");
            outputUser();
            cout << "Your Current Balnce Is : " << balance << endl;
        } else {
            cout << "Unvalid Amount : \n" << endl; 
        }
    }
    void withdraw(){
        float amount ;
        cout << "Inter Withdraw Amount : " ;
        cin >> amount ;
        system("cls");

        if(amount > 0 && amount <= balance ){
            balance = balance - amount ;
            system("cls");

            outputUser();
            cout << "Withdraw Successful : \n";
            cout << "Your Current Balance Is : " << balance << endl; 
        } else {
            cout << "Unsuficient Balance : " << endl;
        }
    }
    void checkBalance(){
        system("cls");
        outputUser();
        cout << "Your Current Balance Is : " << balance << endl; 
    } 

    
    void atmMenu(){
        int choice ;
        do{
            
            cout << "\nInter \n'1' For Deposite : \n'2' For Withdraw : \n'3' For Check Balance : \n'4' For Exit : \n";
            cout << "Inter Choice \n";
            cin >> choice ;

            switch(choice){
                case 1:
                deposite();
                break;

                case 2:
                withdraw();
                break;

                case 3:
                checkBalance();
                break;

                case 4:
                cout << "Thank You\n";
                break;

                default:
                cout << "inValid Choice : " ;
            }
        } while(choice != 4);
    }
};

int main(){
    SavingAccount s;
    s.inputUser();
    s.atmMenu();

    return 0 ;

}