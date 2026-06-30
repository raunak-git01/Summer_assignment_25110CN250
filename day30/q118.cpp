//create mini lib syst
#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    int id[100], n = 0, searchId;
    string title[100];
    bool issued[100];
    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> id[n];
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title[n]);
            issued[n] = false;
            n++;
            cout << "Book Added Successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nID\tTitle\t\tStatus\n";
                for (int i = 0; i < n; i++) {
                    cout << id[i] << "\t" << title[i] << "\t";
                    if (issued[i])
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                }
            }
            break;
        case 3: {
            int found = 0;
            cout << "Enter Book ID: ";
            cin >> searchId;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "Book Found\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Title: " << title[i] << endl;
                    cout << "Status: ";
                    if (issued[i])
                        cout << "Issued\n";
                    else
                        cout << "Available\n";
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Book not found.\n";
            break;
        }
        case 4: {
            int found = 0;
            cout << "Enter Book ID to Issue: ";
            cin >> searchId;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    if (!issued[i]) {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is already issued.\n";
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Book not found.\n";
            break;
        }
        case 5: {
            int found = 0;
            cout << "Enter Book ID to Return: ";
            cin >> searchId;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    if (issued[i]) {
                        issued[i] = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book is already available.\n";
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Book not found.\n";
            break;
        }
        case 6:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}