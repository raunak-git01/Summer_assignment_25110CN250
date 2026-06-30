//inventory management syst
#include <iostream>
using namespace std;
int main() {
    int choice, productId = 0, quantity = 0;
    char productName[50];
    float price = 0;
    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Product\n";
        cout << "3. Update Quantity\n";
        cout << "4. Delete Product\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Product ID: ";
                cin >> productId;
                cout << "Enter Product Name: ";
                cin >> productName;
                cout << "Enter Price: ";
                cin >> price;
                cout << "Enter Quantity: ";
                cin >> quantity;
                cout << "Product Added Successfully!\n";
                break;
            case 2:
                if (productId == 0)
                    cout << "No product found.\n";
                else {
                    cout << "\n----- Product Details -----\n";
                    cout << "Product ID   : " << productId << endl;
                    cout << "Product Name : " << productName << endl;
                    cout << "Price        : " << price << endl;
                    cout << "Quantity     : " << quantity << endl;
                }
                break;
            case 3:
                if (productId == 0)
                    cout << "No product found.\n";
                else {
                    cout << "Enter New Quantity: ";
                    cin >> quantity;
                    cout << "Quantity Updated Successfully!\n";
                }
                break;
            case 4:
                productId = 0;
                price = 0;
                quantity = 0;
                productName[0] = '\0';
                cout << "Product Deleted Successfully!\n";
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