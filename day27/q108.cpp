//marksheet generation syst
#include <iostream>
using namespace std;
int main() {
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;
    cout << "===== Marksheet Generation System =====\n";
    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks in Subject 1: ";
    cin >> m1;

    cout << "Enter Marks in Subject 2: ";
    cin >> m2;

    cout << "Enter Marks in Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Subject 1   : " << m1 << endl;
    cout << "Subject 2   : " << m2 << endl;
    cout << "Subject 3   : " << m3 << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    if (percentage >= 90)
        cout << "Grade : A+";
    else if (percentage >= 75)
        cout << "Grade : A";
    else if (percentage >= 60)
        cout << "Grade : B";
    else if (percentage >= 40)
        cout << "Grade : C";
    else
        cout << "Grade : Fail";
    return 0;
}