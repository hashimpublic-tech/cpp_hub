#include <iostream>
using namespace std;

class Account {
public:
    virtual void calInterest() {
        cout << " Base Account Interest " << endl;
    }
};

class Savings : public Account {
public:
    void calInterest() {
        cout << "Savings Account Interest: 5% " << endl;
    }
};

class Current : public Account {
public:
    void calInterest() {
        cout << "Current Account Interest: 2%" << endl;
    }
};

class FixedDeposit : public Account {
public:
    void calInterest() {
        cout << "Fixed Deposit Interest: 8%" << endl;
    }
};

int main() {
    Account* acc;

    Savings s;
    Current c;
    FixedDeposit f;

    acc =  &s ;
    acc->calInterest();

    acc =  &c ;
    acc->calInterest();

    acc  = &f ;
    acc->calInterest();

    return 0 ;
}