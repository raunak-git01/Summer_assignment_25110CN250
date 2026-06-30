//prog to create student record management syst
#include <iostream>
using namespace std;
int main() {
    int choice, roll = 0;
    char name[50];
    float marks = 0;
    do {
        cout << "\n===== Student Record Management =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Update Marks\n";
        cout << "4. Delete Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Marks: ";
                cin >> marks;
                cout << "Record Added Successfully!\n";
                break;
            case 2:
                if (roll == 0)
                    cout << "No record found.\n";
                else {
                    cout << "\nStudent Record\n";
                    cout << "Roll Number: " << roll << endl;
                    cout << "Name: " << name << endl;
                    cout << "Marks: " << marks << endl;
                }
                break;
            case 3:
                if (roll == 0)
                    cout << "No record found.\n";
                else {
                    cout << "Enter New Marks: ";
                    cin >> marks;
                    cout << "Marks Updated Successfully!\n";
                }
                break;
            case 4:
                roll = 0;
                marks = 0;
                name[0] = '\0';
                cout << "Record Deleted Successfully!\n";
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