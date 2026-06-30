//salary management syst
#include <iostream>
using namespace std;
int main() {
    int choice;
    float basic, allowance, deduction, netSalary;
    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Calculate Salary\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Basic Salary: ";
                cin >> basic;
                cout << "Enter Allowance: ";
                cin >> allowance;
                cout << "Enter Deduction: ";
                cin >> deduction;
                netSalary = basic + allowance - deduction;
                cout << "\n----- Salary Details -----\n";
                cout << "Basic Salary : " << basic << endl;
                cout << "Allowance    : " << allowance << endl;
                cout << "Deduction    : " << deduction << endl;
                cout << "Net Salary   : " << netSalary << endl;
                break;
            case 2:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 2);
    return 0;
}