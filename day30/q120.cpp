//mini project on hotel management syst
#include <iostream>
#include <string>
using namespace std;
int roomNo[100], days[100], n = 0, searchRoom;
string guestName[100];
float rent[100], bill[100];
void addBooking() {
    cout << "\nEnter Room Number: ";
    cin >> roomNo[n];
    cin.ignore();
    cout << "Enter Guest Name: ";
    getline(cin, guestName[n]);
    cout << "Enter Number of Days: ";
    cin >> days[n];
    cout << "Enter Rent Per Day: ";
    cin >> rent[n];
    bill[n] = days[n] * rent[n];
    n++;
    cout << "Booking Added Successfully!\n";
}
void displayBookings() {
    if (n == 0) {
        cout << "\nNo Booking Records Found.\n";
        return;
    }
    cout << "\n===== BOOKING RECORDS =====\n";
    cout << "Room\tGuest Name\tDays\tRent\tBill\n";
    for (int i = 0; i < n; i++) {
        cout << roomNo[i] << "\t"
             << guestName[i] << "\t\t"
             << days[i] << "\t"
             << rent[i] << "\t"
             << bill[i] << endl;
    }
}
void searchBooking() {
    int found = 0;
    cout << "\nEnter Room Number: ";
    cin >> searchRoom;
    for (int i = 0; i < n; i++) {
        if (roomNo[i] == searchRoom) {
            cout << "\nBooking Found\n";
            cout << "Room Number : " << roomNo[i] << endl;
            cout << "Guest Name  : " << guestName[i] << endl;
            cout << "Days Stayed : " << days[i] << endl;
            cout << "Rent/Day    : " << rent[i] << endl;
            cout << "Total Bill  : " << bill[i] << endl;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Booking Not Found.\n";
}
void updateBooking() {
    int found = 0;
    cout << "\nEnter Room Number: ";
    cin >> searchRoom;
    for (int i = 0; i < n; i++) {
        if (roomNo[i] == searchRoom) {
            cout << "Enter New Guest Name: ";
            cin.ignore();
            getline(cin, guestName[i]);
            cout << "Enter New Number of Days: ";
            cin >> days[i];
            cout << "Enter New Rent Per Day: ";
            cin >> rent[i];
            bill[i] = days[i] * rent[i];
            cout << "Booking Updated Successfully!\n";
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Booking Not Found.\n";
}
void cancelBooking() {
    int found = 0;
    cout << "\nEnter Room Number to Cancel: ";
    cin >> searchRoom;
    for (int i = 0; i < n; i++) {
        if (roomNo[i] == searchRoom) {
            for (int j = i; j < n - 1; j++) {
                roomNo[j] = roomNo[j + 1];
                guestName[j] = guestName[j + 1];
                days[j] = days[j + 1];
                rent[j] = rent[j + 1];
                bill[j] = bill[j + 1];
            }
            n--;
            cout << "Booking Cancelled Successfully!\n";
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Booking Not Found.\n";
}
int main() {
    int choice;

    do {
        cout << "\n====== HOTEL RECORD MANAGEMENT SYSTEM ======\n";
        cout << "1. Add Booking\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Booking\n";
        cout << "4. Update Booking\n";
        cout << "5. Cancel Booking\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addBooking();
                break;
            case 2:
                displayBookings();
                break;
            case 3:
                searchBooking();
                break;
            case 4:
                updateBooking();
                break;
            case 5:
                cancelBooking();
                break;
            case 6:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}