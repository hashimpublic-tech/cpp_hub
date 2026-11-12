#include<iostream>
using namespace std ;
class TrafficLight{
  
    public:
    virtual void showSignal(){
        cout << "\nTraffic Signals\n";
    }
};
class Red : public TrafficLight{

    public:
    void showSignal(){
        cout << "Red Light : Stop\n";
    }
};
class Yellow : public TrafficLight{
    public:
    void showSignal(){
        cout << "Yellow Light : Wait\n";
    }
};
class Green : public TrafficLight{

    public:
    void showSignal(){
        cout << "Green Light : Go!\n";
    }
};
int main(){
    TrafficLight* ptr ;
    Red r ;
    Yellow y;
    Green g ;

    int choice ;
    
    do{
    cout << "\n1 For Red \n2 For Yellow \n3 For Green\n";
    cout << "Enter Your Choice ";
    cin >> choice ;
    
    if(choice == 1){
        system("cls");
        ptr = &r;
        ptr->showSignal();
    } else if (choice == 2){
        system("cls");
        ptr = &y;
        ptr->showSignal();
    } else if (choice == 3){
        system("cls");
        ptr = &g ;
        ptr->showSignal();
    } 
    else if (choice == 4 ){
        system("cls");
        cout << "Thanks" << endl;
    } else  {
        cout << "Invalid Choice \n";
    }
} while (choice != 4) ;
    return 0 ;
}