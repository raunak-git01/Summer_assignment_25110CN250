//library management syst
#include <iostream>
using namespace std;
int main() {
    int choice, bookId = 0;
    char bookName[50];
    bool issued = false;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookId;
                cout << "Enter Book Name: ";
                cin >> bookName;
                issued = false;
                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if (bookId == 0) {
                    cout << "No book record found.\n";
                } else {
                    cout << "\n----- Book Details -----\n";
                    cout << "Book ID   : " << bookId << endl;
                    cout << "Book Name : " << bookName << endl;
                    if (issued)
                        cout << "Status    : Issued\n";
                    else
                        cout << "Status    : Available\n";
                }
                break;

            case 3:
                if (bookId == 0)
                    cout << "No book record found.\n";
                else if (issued)
                    cout << "Book is already issued.\n";
                else {
                    issued = true;
                    cout << "Book Issued Successfully!\n";
                }
                break;

            case 4:
                if (bookId == 0)
                    cout << "No book record found.\n";
                else if (!issued)
                    cout << "Book is already available.\n";
                else {
                    issued = false;
                    cout << "Book Returned Successfully!\n";
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