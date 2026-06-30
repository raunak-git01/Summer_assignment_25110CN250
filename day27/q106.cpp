//prog to create employee record syst
#include <iostream>
using namespace std;
int main() {
    int choice, id = 0;
    char name[50];
    float salary = 0;
    do {
        cout << "\n===== Employee Record Management =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employee\n";
        cout << "3. Update Salary\n";
        cout << "4. Delete Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Employee Name: ";
                cin >> name;
                cout << "Enter Salary: ";
                cin >> salary;
                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if (id == 0)
                    cout << "No record found.\n";
                else {
                    cout << "\n----- Employee Record -----\n";
                    cout << "Employee ID: " << id << endl;
                    cout << "Employee Name: " << name << endl;
                    cout << "Salary: " << salary << endl;
                }
                break;

            case 3:
                if (id == 0)
                    cout << "No record found.\n";
                else {
                    cout << "Enter New Salary: ";
                    cin >> salary;
                    cout << "Salary Updated Successfully!\n";
                }
                break;

            case 4:
                id = 0;
                salary = 0;
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