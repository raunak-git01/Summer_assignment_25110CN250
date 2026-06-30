//bank acc syst
#include <iostream>
using namespace std;
int main() {
    int choice, accNo = 0;
    char name[50];
    float balance = 0, amount;
    do {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter Account Holder Name: ";
                cin >> name;
                cout << "Enter Initial Balance: ";
                cin >> balance;
                cout << "Account Created Successfully!\n";
                break;

            case 2:
                if (accNo == 0)
                    cout << "No account found.\n";
                else {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;
                    balance += amount;
                    cout << "Deposit Successful!\n";
                }
                break;

            case 3:
                if (accNo == 0)
                    cout << "No account found.\n";
                else {
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawal Successful!\n";
                    } else {
                        cout << "Insufficient Balance!\n";
                    }
                }
                break;

            case 4:
                if (accNo == 0)
                    cout << "No account found.\n";
                else {
                    cout << "\n----- Account Details -----\n";
                    cout << "Account Number : " << accNo << endl;
                    cout << "Account Holder : " << name << endl;
                    cout << "Balance        : " << balance << endl;
                }
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 5);
    return 0;
}