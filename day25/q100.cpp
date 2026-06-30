//prog to sort words by length
#include <iostream>
using namespace std;
int main() {
    char word[10][50], temp[50];
    int len[10], n;
    cout << "Enter the number of words: ";
    cin >> n;
    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> word[i];
        // Find length of the word
        len[i] = 0;
        while (word[i][len[i]] != '\0')
            len[i]++;
    }
    // Sort by length (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (len[i] > len[j]) {
                // Swap lengths
                int t = len[i];
                len[i] = len[j];
                len[j] = t;
                // Swap words
                int k = 0;
                while (word[i][k] != '\0') {
                    temp[k] = word[i][k];
                    k++;
                }
                temp[k] = '\0';
                k = 0;
                while (word[j][k] != '\0') {
                    word[i][k] = word[j][k];
                    k++;
                }
                word[i][k] = '\0';

                k = 0;
                while (temp[k] != '\0') {
                    word[j][k] = temp[k];
                    k++;
                }
                word[j][k] = '\0';
            }
        }
    }
    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++)
        cout << word[i] << endl;
    return 0;
}