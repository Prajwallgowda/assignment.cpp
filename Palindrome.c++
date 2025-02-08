#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();
    for (int i = 0; i < (len / 2); i++) {
        if (str[i] != str[len - 1 - i]) {
            cout << "Not a palindrome" << endl;
            break;
        }
        if (i == (len / 2) - 1) {
            cout << "Palindrome" << endl;
        }
    }

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = '*';
        }
    }
    cout << str << endl;

    return 0;
}
