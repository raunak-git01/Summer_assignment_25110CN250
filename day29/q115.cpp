//menu driven string operation syst
#include <iostream>
using namespace std;
int main() {
    char str[100];
    int choice, i, len;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    do {
        cout << "\n===== String Operations Menu =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Check Palindrome\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                len = 0;
                while (str[len] != '\0')
                    len++;
                cout << "Length = " << len << endl;
                break;

            case 3:
                len = 0;
                while (str[len] != '\0')
                    len++;

                cout << "Reversed String: ";
                for (i = len - 1; i >= 0; i--)
                    cout << str[i];
                cout << endl;
                break;

            case 4:
                len = 0;
                while (str[len] != '\0')
                    len++;

                bool palindrome = true;
                for (i = 0; i < len / 2; i++) {
                    if (str[i] != str[len - 1 - i]) {
                        palindrome = false;
                        break;
                    }
                }

                if (palindrome)
                    cout << "The string is a palindrome.\n";
                else
                    cout << "The string is not a palindrome.\n";
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