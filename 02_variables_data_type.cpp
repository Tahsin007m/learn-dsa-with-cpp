#include <iostream>
using namespace std;

int main() {
    // ----- Integer data type -----
    // Used to store whole numbers (no decimals)
    int age = 20;

    // ----- Floating point data type -----
    // Used to store numbers with decimal points (single precision)
    float price = 9.99f;

    // ----- Double data type -----
    // Similar to float but with more precision (double precision)
    double pi = 3.14159265;

    // ----- Character data type -----
    // Used to store a single character
    char grade = 'A';

    // ----- Boolean data type -----
    // Stores only true or false
    bool isStudent = true;

    // ----- String data type -----
    // Used to store text (a sequence of characters)
    string name = "Alice";

    // Display each variable along with its data type
    cout << "----- Variables and Data Types -----" << endl;
    cout << "Name (string): " << name << endl;
    cout << "Age (int): " << age << endl;
    cout << "Price (float): " << price << endl;
    cout << "Pi (double): " << pi << endl;
    cout << "Grade (char): " << grade << endl;
    cout << "Is Student (bool): " << isStudent << endl;

    cout << endl;

    // ----- Sum of numeric variables -----
    // Adding int, float, and double together
    double sum = age + price + pi;

    cout << "----- Sum of Numeric Values -----" << endl;
    cout << "Sum of age + price + pi = " << sum << endl;

    return 0;
}