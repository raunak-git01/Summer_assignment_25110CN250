//menu driven array operation syst
#include <iostream>
using namespace std;
int main() {
    int a[100], n, choice, i, sum = 0, max, min;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    do {
        cout << "\n===== Array Operations Menu =====\n";
        cout << "1. Display Array\n";
        cout << "2. Sum of Elements\n";
        cout << "3. Find Maximum Element\n";
        cout << "4. Find Minimum Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += a[i];
                cout << "Sum = " << sum << endl;
                break;

            case 3:
                max = a[0];
                for (i = 1; i < n; i++) {
                    if (a[i] > max)
                        max = a[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;

            case 4:
                min = a[0];
                for (i = 1; i < n; i++) {
                    if (a[i] < min)
                        min = a[i];
                }
                cout << "Minimum Element = " << min << endl;
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