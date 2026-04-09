#include <iostream>
using namespace std;
class Product 
{
private:
    int productID;
    string name;
    double price;
    int quantity;
public:
    Product()
    {
        productID = 0 ;
        name = "no name";
        price = 0.00;
        quantity = 00 ;
    }
    Product (int id , string na, double pri , int quan) 
    {
        productID = id ;
        name = na ;
        price = pri ;
        quantity = quan ;
    }
    void display() {

        cout << " ID: " << productID << endl;
        cout << " Name: " << name << endl;
        cout << " Price: " << price << endl;
        cout << " Quantity: " << quantity << endl;
    }
};
int main() {

    Product p;

    cout << "Default Constructor Output:" << endl;
    p.display();
    
    cout << "\n\n";

    Product p2(101, "Mobile", 25000, 2);
    cout << "Parameterized Constructor Output:" << endl;
    p2.display();

    return 0;
}