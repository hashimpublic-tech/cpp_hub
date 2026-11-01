#include<iostream>
#include<vector>
using namespace std;

class ShowroomException{
    string message;
public:
    ShowroomException(string msg){
        message = msg;
    }

    string what(){
        return message;
    }
};
class Vehicle{
protected:
    int vehicleID;
    string brand;
    double price;
    int stock;
public:
    Vehicle(int id,string b,double p,int s){
        if(p<=0)
        throw ShowroomException("Price must be greater than zero.");
        vehicleID=id;
        brand=b;
        price=p;
        stock=s;
    }
    int getID(){
        return vehicleID;
    }
    double getPrice(){
        return price;
    }
    int getStock(){
        return stock;
    }
    void reduceStock(){
        if(stock<=0)
        throw ShowroomException("Vehicle Out Of Stock.");
        stock--;
    }
    virtual void display()=0;
    virtual ~Vehicle(){}
};

class Car : public Vehicle{
public:
    Car(int id,string b,double p,int s)
        : Vehicle(id,b,p,s){}

    void display(){
        cout<<"\n[CAR]";
        cout<<"\nID: "<<vehicleID;
        cout<<"\nBrand: "<<brand;
        cout<<"\nPrice: "<<price;
        cout<<"\nStock: "<<stock<<endl;
    }
};
class Bike : public Vehicle{
public:
    Bike(int id,string b,double p,int s)
        : Vehicle(id,b,p,s){}

    void display(){
        cout<<"\n[BIKE]";
        cout<<"\nID: "<<vehicleID;
        cout<<"\nBrand: "<<brand;
        cout<<"\nPrice: "<<price;
        cout<<"\nStock: "<<stock<<endl;
    }
};

class SUV : public Vehicle
{
public:
    SUV(int id,string b,double p,int s)
        : Vehicle(id,b,p,s){}

    void display()
    {
        cout<<"\n[SUV]";
        cout<<"\nID: "<<vehicleID;
        cout<<"\nBrand: "<<brand;
        cout<<"\nPrice: "<<price;
        cout<<"\nStock: "<<stock<<endl;
    }
};

class Customer{
    int customerID;
    string name;
    int age;
public:
    Customer(int id,string n,int a){
        if(a<=0)
            throw ShowroomException("Invalid Customer Age.");

        customerID=id;
        name=n;
        age=a;
    }
    int getID(){
        return customerID;
    }
    void display(){
        cout<<"\nCustomer ID: "<<customerID;
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age<<endl;
    }
};
class Showroom{
    vector<Vehicle*> vehicles;
    vector<Customer> customers;
public:
    void addVehicle(Vehicle* v){
        for(auto x:vehicles){
            if(x->getID()==v->getID())
                throw ShowroomException("Duplicate Vehicle ID.");
        }
        vehicles.push_back(v);
        cout<<"Vehicle Added Successfully.\n";
    }
    void registerCustomer(Customer c){
        customers.push_back(c);
        cout<<"Customer Registered.\n";
    }
    Vehicle* searchVehicle(int id){
        for(auto v:vehicles){
            if(v->getID()==id)
                return v;
        }
        throw ShowroomException("Vehicle Not Found.");
    }
    Customer searchCustomer(int id){
        for(auto c:customers){
            if(c.getID()==id)
                return c;
        }
        throw ShowroomException("Customer Not Found.");
    }
    void sellVehicle(int cid,int vid,double payment){
        searchCustomer(cid);
        Vehicle* v = searchVehicle(vid);
        if(payment < v->getPrice())
            throw ShowroomException("Payment Less Than Vehicle Price.");
        v->reduceStock();
        cout<<"\nSale Completed Successfully.\n";
    }

    void displayVehicles(){
        for(auto v:vehicles)
            v->display();
    }
};
int main(){
    Showroom showroom;
    int choice;

    do{
        cout<<"\n\n===== SHOWROOM MANAGEMENT =====";
        cout<<"\n1. Add Car";
        cout<<"\n2. Add Bike";
        cout<<"\n3. Add SUV";
        cout<<"\n4. Register Customer";
        cout<<"\n5. Sell Vehicle";
        cout<<"\n6. Display Vehicles";
        cout<<"\n0. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        try
        {
            if(choice==1 || choice==2 || choice==3)
            {
                int id,stock;
                string brand;
                double price;

                cout<<"ID: ";
                cin>>id;

                cout<<"Brand: ";
                cin>>brand;

                cout<<"Price: ";
                cin>>price;

                cout<<"Stock: ";
                cin>>stock;

                if(choice==1)
                    showroom.addVehicle(new Car(id,brand,price,stock));

                else if(choice==2)
                    showroom.addVehicle(new Bike(id,brand,price,stock));

                else
                    showroom.addVehicle(new SUV(id,brand,price,stock));
            }
            else if(choice==4)
            {
                int id,age;
                string name;

                cout<<"Customer ID: ";
                cin>>id;

                cout<<"Name: ";
                cin>>name;

                cout<<"Age: ";
                cin>>age;

                Customer c(id,name,age);
                showroom.registerCustomer(c);
            }
            else if(choice==5){
                int cid,vid;
                double payment;

                cout<<"Customer ID: ";
                cin>>cid;

                cout<<"Vehicle ID: ";
                cin>>vid;

                cout<<"Payment: ";
                cin>>payment;

                showroom.sellVehicle(cid,vid,payment);
            }

            else if(choice==6)
            {
                showroom.displayVehicles();
            }
        }

        catch(ShowroomException e){
            cout<<"\nError: "<<e.what()<<endl;
        }

    }while(choice!=0);

    return 0;
}