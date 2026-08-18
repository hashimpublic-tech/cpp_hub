#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100
struct Customer {
    char name[100];
    char address[100];
    char phone[11];
    char from_date[20];
    char to_date[20];
    float advance;
    int booking_id;
};
struct Room {
    int roomNumber;
    char ac;
    char type;
    char stype;
    int rent;
    int status;   
    Customer cust;
};
Room rooms[MAX];
int countr = 0;
void addRoom() {
    cout << "\nEnter Room Number: ";
    cin >> rooms[countr].roomNumber;
    cout << "AC / Non-AC (A/N): ";
    cin >> rooms[countr].ac;
    cout << "Comfort (S/N): ";
    cin >> rooms[countr].type;
    cout << "Size (B/S): ";
    cin >> rooms[countr].stype;
    cout << "Daily Rent: ";
    cin >> rooms[countr].rent;
    rooms[countr].status = 0;
    countr++;
    cout << "\nRoom Added Successfully!\n";
}
void displayRoom(int i) {
    cout << "\nRoom Number: " << rooms[i].roomNumber;
    cout << "\nAC: " << rooms[i].ac;
    cout << "\nComfort: " << rooms[i].type;
    cout << "\nSize: " << rooms[i].stype;
    cout << "\nRent: " << rooms[i].rent << endl;
}
void availableRooms() {
    int found = 0;
    for (int i = 0; i < countr; i++) {
        if (rooms[i].status == 0) {
            displayRoom(i);
            cout << "----------------------\n";
            found = 1;
        }
    }
    if (!found)
        cout << "\nNo Rooms Available\n";
}
void checkIn() {
    int rno;
    cout << "\nEnter Room Number: ";
    cin >> rno;
    for (int i = 0; i < countr; i++) {
        if (rooms[i].roomNumber == rno && rooms[i].status == 0) {
            cout << "Booking ID: ";
            cin >> rooms[i].cust.booking_id;
            cout << "Customer Name: ";
            cin >> rooms[i].cust.name;
            cout << "Address (City): ";
            cin >> rooms[i].cust.address;
            cout << "Phone: ";
            cin >> rooms[i].cust.phone;
            cout << "From Date: ";
            cin >> rooms[i].cust.from_date;
            cout << "To Date: ";
            cin >> rooms[i].cust.to_date;
            cout << "Advance Payment: ";
            cin >> rooms[i].cust.advance;
            rooms[i].status = 1;
            cout << "\nCheck-In Successful!\n";
            return;
        }
    }
    cout << "\nRoom Not Available\n";
}
void searchCustomer() {
    char name[100];
    cout << "\nEnter Customer Name: ";
    cin >> name;
    for (int i = 0; i < countr; i++) {
        if (rooms[i].status == 1 && strcmp(rooms[i].cust.name, name) == 0) {
            cout << "\nCustomer Found!";
            cout << "\nRoom Number: " << rooms[i].roomNumber << endl;
            return;
        }
    }
    cout << "\nCustomer Not Found\n";
}
void checkOut() {
    int rno, days;
    float bill;
    cout << "\nEnter Room Number: ";
    cin >> rno;
    for (int i = 0; i < countr; i++) {
        if (rooms[i].roomNumber == rno && rooms[i].status == 1) {
            cout << "Number of Days: ";
            cin >> days;
            bill = days * rooms[i].rent;
            cout << "\nTotal Bill: " << bill;
            cout << "\nAdvance Paid: " << rooms[i].cust.advance;
            cout << "\nPayable Amount: " << bill - rooms[i].cust.advance << endl;
            rooms[i].status = 0;
            cout << "\nCheck-Out Successful\n";
            return;
        }
    }
    cout << "\nRoom Not Found\n";
}
void guestReport() {
    cout << "\n--- Guest Summary ---\n";
    for (int i = 0; i < countr; i++) {
        if (rooms[i].status == 1) {
            cout << "\nName: " << rooms[i].cust.name;
            cout << "\nRoom: " << rooms[i].roomNumber;
            cout << "\nPhone: " << rooms[i].cust.phone;
            cout << "\n---------------------";
        }
    }
}
int main() {
    int choice;
    do {
        cout << "\n===== HOTEL MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Room";
        cout << "\n2. Available Rooms";
        cout << "\n3. Check In";
        cout << "\n4. Search Customer";
        cout << "\n5. Check Out";
        cout << "\n6. Guest Report";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addRoom(); 
            break;
            case 2: availableRooms(); 
            break;
            case 3: checkIn(); 
            break;
            case 4: searchCustomer(); 
            break;
            case 5: checkOut(); 
            break;
            case 6: guestReport();
            break;
            case 7: cout << "\nThank You!\n"; 
            break;
            default: cout << "\nInvalid Choice\n";
        }
    } while (choice != 7);
    return 0;
}
