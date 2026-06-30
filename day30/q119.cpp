//mini employee management syst
#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    int id[100], n = 0, searchId;
    string name[100];
    float salary[100];
    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> id[n];
            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, name[n]);
            cout << "Enter Salary: ";
            cin >> salary[n];
            n++;
            cout << "Employee Added Successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nID\tName\t\tSalary\n";
                for (int i = 0; i < n; i++) {
                    cout << id[i] << "\t" << name[i] << "\t\t" << salary[i] << endl;
                }
            }
            break;
        case 3: {
            int found = 0;
            cout << "Enter Employee ID: ";
            cin >> searchId;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "\nEmployee Found\n";
                    cout << "ID: " << id[i] << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Employee not found.\n";
            break;
        }
        case 4: {
            int found = 0;
            cout << "Enter Employee ID: ";
            cin >> searchId;
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    cout << "Enter New Salary: ";
                    cin >> salary[i];
                    cout << "Salary Updated Successfully!\n";
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Employee not found.\n";
            break;
        }
        case 5: {
            int found = 0;
            cout << "Enter Employee ID to Delete: ";
            cin >> searchId; 
            for (int i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    for (int j = i; j < n - 1; j++) {
                        id[j] = id[j + 1];
                        name[j] = name[j + 1];
                        salary[j] = salary[j + 1];
                    }
                    n--;
                    cout << "Employee Deleted Successfully!\n";
                    found = 1;
                    break;
                }
            }
            if (!found)
                cout << "Employee not found.\n";
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