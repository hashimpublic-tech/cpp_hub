// 🔹 3. Online Shopping Cart
// 💡 Scenario:

// User adds products to cart and gets total bill.

// 🔧 Concepts:
// Arrays → store product prices
// Loops → calculate total
// Functions → calculate bill
// if-else → apply discount
// Encapsulation → Product class
// Inheritance → Electronics, Clothes
// 🧠 Task:
// Add 3–5 items
// If bill > 5000 → give 10% discount.



#include<iostream>
using namespace std ;
class Product{
    protected:
    string name ;
    int product[5];
    int count = 0 ;
    int productCount = 0 ;

    private:
    float total = 0 ;

    public:
    void input(){
        cout << "Enter Name : " << name ;
        getline(cin >> ws , name ) ;
        system("cls");
    }
    void productIn(){

        cout << "\n How many Products : " ;
        cin >> productCount;

        cout << "\nInter Products Prices :\n";
        for( int i=0 ; i<productCount ; i++ ) {
            
            cout << "P" << i+1 << " : " ;
            cin >> product[i];
            total += product[i];
            count++;
            
        }
    }
    void productPr(){
        system("cls");

        cout << "\nName : " << name << endl;
        cout << "\nProduct Prices : \n";
        for( int i=0 ; i<productCount ; i++ ) {
            cout << "product " << i+1 << ": " << product[i] << endl;            
        }
    }
    float printTotal(){
        return total ;
    }
};
class Bill : public Product {
    public:
    void discountBill(){
    float total = printTotal();

    if (total > 5000){
        cout << "\nYour Bill IS : " << total << endl;
        float discount = total * 0.10 ;
        float finalBill = total - discount ;

        cout << "10% Discount :\n" ;
        cout << "Updated Bill : " << finalBill << endl;
        cout << "total Products : " << count << endl;
    } else {
        cout << "Your Bill IS : " << total << endl;
        cout << "total Products : " << count << endl;

    }

    }
};
int main(){
    Bill b ;
    b.input();
    b.productIn();
    b.productPr();
    b.discountBill();

    return 0 ;
}