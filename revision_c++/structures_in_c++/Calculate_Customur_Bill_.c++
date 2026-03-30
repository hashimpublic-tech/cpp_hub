// 7️⃣ Store Customer Bill
// Create a structure Customer with:
// name
// productName
// price
// quantity

// Task:
// Input 2 customers.
// Calculate and display the total bill.

// Formula:
// bill = price × quantity



#include<iostream>
using namespace std ;
struct customur{
    string name ;
    string productName ;
    int price ;
    int quantity ;
};
void function( customur c[]){

    for(int i=0 ; i<2 ; i++ ){

        cout << "\n: Customur " << i+1 << " : \n" << endl;
        cout << "Name : " << c[i].name << endl; 
        cout << "Product Name : " << c[i].productName << endl;
        cout << "Product Price : " << c[i].price << endl;
        cout << "Product Quantity : " << c[i].quantity << endl;

        int Bill = c[i].price * c[i].quantity ;

        cout << "** Total Bill IS : " << Bill  << endl;
    }
}
int main(){
    
    customur c[2];

    for( int j=0 ; j<2 ; j++ ){
        cout << "Enter Data For Customur " << j+1 << endl;

        cout << "Enter Name : " ;
        getline(cin >> ws , c[j].name );

        cout << "Enter Product Name : " ;
        getline(cin >> ws , c[j].productName ) ;
        

        cout << "Enter Product price : " ;
        cin >> c[j].price ;

        cout << "Enter Product Quantity : " ;
        cin >> c[j].quantity ;

        system("cls") ;
          
    }
    
    function(c) ;

    return 0 ;
}
