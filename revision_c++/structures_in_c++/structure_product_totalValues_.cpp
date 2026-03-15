// 4️⃣ Product Inventory
// Create a structure Product with:
// productName
// price
// quantity

// Task:
// Input 3 products.
// Calculate and display total value of each product.

// Formula:
// totalValue = price × quantity


#include<iostream>
using namespace std ;
struct product {
    string productName ;
    int productPrice ;
    float productQuantity ;
};

void function(product p1[]){
    
    cout << "\nDetails Of Each Product : \n" << endl;
    for( int i=0 ; i<3 ; i++){
        int productValue = 0 ;
        cout << "\nDetails Of Product " << i+1 << endl;

        cout << "Product Name : " << p1[i].productName << endl;
        cout << "Product Price : " << p1[i].productPrice << endl;
        cout << "Product Quantity : " << p1[i].productQuantity << endl;

        productValue = p1[i].productPrice * p1[i].productQuantity ;

        cout << "**Total Value Of the Product : " << productValue << endl;
    }
}
int main(){
    product p1[3];

    cout << "\nEnter Products Details : \n" << endl;

    for( int j=0 ; j<3 ; j++ ){
        cout << "Enter Data For Product " << j+1 << endl;

        cout << "Enter Product Name : "  ;
        getline(cin >> ws , p1[j].productName) ;

        cout << "Enter Product Price : " ;
        cin >> p1[j].productPrice ;

        cout << "Enter product Quantity : " ;
        cin >> p1[j].productQuantity ;

        system("cls");
    }

    function(p1);

    return 0 ;
}