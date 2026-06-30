//prog to create quiz application
#include <iostream>
using namespace std;
int main() {
    int ans, score = 0;
    cout << "===== QUIZ APPLICATION =====\n\n";

    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cin >> ans;
    if (ans == 2)
        score++;
    cout << "\n2. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cin >> ans;
    if (ans == 3)
        score++;
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 367\n";
    cin >> ans;
    if (ans == 2)
        score++;
    cout << "\n4. Which language is used for C++ programming?\n";
    cout << "1. C++\n2. HTML\n3. SQL\n4. CSS\n";
    cin >> ans;
    if (ans == 1)
        score++;
    cout << "\n5. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> ans;
    if (ans == 3)
        score++;
    cout<<"\nYour Score: " << score << " out of 5";
    return 0;
}