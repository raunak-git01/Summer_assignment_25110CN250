//contact management syst
#include <iostream>
using namespace std;
int main() {
    int choice;
    char name[50], phone[15];
    bool contact = false;
    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Update Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Phone Number: ";
                cin >> phone;
                contact = true;
                cout << "Contact Added Successfully!\n";
                break;

            case 2:
                if (!contact)
                    cout << "No contact found.\n";
                else {
                    cout << "\n----- Contact Details -----\n";
                    cout << "Name: " << name << endl;
                    cout << "Phone Number: " << phone << endl;
                }
                break;

            case 3:
                if (!contact)
                    cout << "No contact found.\n";
                else {
                    cout << "Enter New Name: ";
                    cin >> name;
                    cout << "Enter New Phone Number: ";
                    cin >> phone;
                    cout << "Contact Updated Successfully!\n";
                }
                break;

            case 4:
                if (!contact)
                    cout << "No contact found.\n";
                else {
                    contact = false;
                    name[0] = '\0';
                    phone[0] = '\0';
                    cout << "Contact Deleted Successfully!\n";
                }
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 5);
    return 0;
}