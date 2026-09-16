// 🔹 3. Payment System 💳

// 👉 Real-world scenario

// Base: Payment → pay()
// Derived: JazzCash, EasyPaisa, CreditCard

// ✅ Task:

// Choose payment method
// Call pay()
// Show different messages

#include<iostream>
using namespace std ;
class Payment{
    public:
    virtual void pay(){
        cout << "Choose Payment Method \n";
    }
};
class Jazzcash : public Payment{
    public:
    void pay(){
        cout << "Jazzcash\n";
    }
};
class Easypaisa : public Jazzcash{
    public:
    void pay(){
        cout << "Easypaisa\n";
    }
};
class CreditCard : public Easypaisa {
    public:
    void pay(){
        cout << "CreditCard\n";
    }
};
int main(){
    Payment* ptr ;

    Payment p1 ;
    Jazzcash j1 ;
    Easypaisa e1 ;
    CreditCard c1 ;

    ptr = &p1 ;
    ptr -> pay();
    
    ptr = &j1 ;
    ptr -> pay();

    ptr = &e1 ;
    ptr -> pay();

    ptr = &c1 ;
    ptr ->pay();

    return 0 ;

    
}