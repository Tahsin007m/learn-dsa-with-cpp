#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    const string correctPassword = "admin123";

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Wrong password, try again.\n";
        }

    } while (password != correctPassword);

    cout << "Access granted!" << endl;

    return 0;
}