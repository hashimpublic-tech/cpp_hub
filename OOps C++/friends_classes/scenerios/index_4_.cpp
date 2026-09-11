// 🔹 4. Mobile Phone & Repair Shop 📱
// Scenario:

// Phone password is private.
// RepairShop class can access phone details for repair.

// Practice:
// Display phone issue
// Unlock for maintenance

#include<iostream>
using namespace std ;
class MobilePhone{
    private :
    string password = "1345";
    string issue = "screen damage";

    friend class ShopKeeper ;
};
class ShopKeeper{
    public:
    void repair(MobilePhone m ){
        cout << "Mobile Password : " << m.password << endl;
        cout << "Mobile Issue : " << m.issue << endl;

        cout << "\nRepair Completed\n";
    }
};
int main(){
    MobilePhone m ;
    ShopKeeper s ;
    s.repair(m);

    return 0 ;
}