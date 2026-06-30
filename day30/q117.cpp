//student record system 
#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    int roll[100], n = 0;
    string name[100];
    float marks[100];
    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[n];
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name[n]);
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student Added Successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\nRoll\tName\t\tMarks\n";
                for (int i = 0; i < n; i++) {
                    cout << roll[i] << "\t" << name[i] << "\t\t" << marks[i] << endl;
                }
            }
            break;
        case 3: {
            int r, found = 0;
            cout << "Enter Roll Number to Search: ";
            cin >> r;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number: " << roll[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Student not found.\n";
            break;
        }
        case 4: {
            int r, found = 0;
            cout << "Enter Roll Number: ";
            cin >> r;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Marks Updated Successfully!\n";
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Student not found.\n";
            break;
        }
        case 5: {
            int r, found = 0;
            cout << "Enter Roll Number to Delete: ";
            cin >> r;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    for (int j = i; j < n - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }
                    n--;
                    found = 1;
                    cout << "Record Deleted Successfully!\n";
                    break;
                }
            }
            if (!found)
                cout << "Student not found.\n";
            break;
        }
        case 6:
            cout << "Exiting Program...\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}