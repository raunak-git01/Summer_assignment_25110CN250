//ticket booking syst
#include <iostream>
using namespace std;
int main() {
    int choice, tickets = 50, book, cancel;
    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Check Available Tickets\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of tickets to book: ";
                cin >> book;

                if (book <= tickets) {
                    tickets -= book;
                    cout << "Ticket Booked Successfully!\n";
                } else {
                    cout << "Not enough tickets available.\n";
                }
                break;

            case 2:
                cout << "Enter number of tickets to cancel: ";
                cin >> cancel;

                tickets += cancel;
                cout << "Ticket Cancelled Successfully!\n";
                break;

            case 3:
                cout << "Available Tickets: " << tickets << endl;
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);
    return 0;
}