#include <iostream>
using namespace std;

int main() {
    cout << "----- Type Casting in C++ -----" << endl << endl;

    // ============================================
    // 1. IMPLICIT TYPE CASTING (Automatic)
    // Done automatically by the compiler
    // Usually converts a smaller type to a bigger type
    // ============================================
    int num1 = 10;
    double num2 = num1;  // int is automatically converted to double

    cout << "Implicit Casting:" << endl;
    cout << "int num1 = " << num1 << endl;
    cout << "double num2 (from num1) = " << num2 << endl << endl;

    // ============================================
    // 2. EXPLICIT TYPE CASTING (Manual)
    // Done manually by the programmer using (type) or static_cast
    // Often used to convert a bigger type to a smaller type
    // ============================================

    // Example A: Old C-style casting
    double price = 99.99;
    int roundedPrice = (int)price;   // decimal part is removed (truncated)

    cout << "Explicit Casting (C-style):" << endl;
    cout << "double price = " << price << endl;
    cout << "int roundedPrice = " << roundedPrice << endl << endl;

    // Example B: Modern C++ style casting using static_cast
    float temperature = 36.6f;
    int wholeTemp = static_cast<int>(temperature);

    cout << "Explicit Casting (static_cast):" << endl;
    cout << "float temperature = " << temperature << endl;
    cout << "int wholeTemp = " << wholeTemp << endl << endl;

    // ============================================
    // 3. CHAR to INT casting
    // Characters are stored as ASCII numbers internally
    // ============================================
    char letter = 'A';
    int asciiValue = static_cast<int>(letter);

    cout << "Char to Int Casting:" << endl;
    cout << "char letter = " << letter << endl;
    cout << "int asciiValue = " << asciiValue << endl << endl;

    // ============================================
    // 4. INT to CHAR casting
    // Converts a number back into its corresponding character
    // ============================================
    int number = 66;
    char convertedChar = static_cast<char>(number);

    cout << "Int to Char Casting:" << endl;
    cout << "int number = " << number << endl;
    cout << "char convertedChar = " << convertedChar << endl << endl;

    // ============================================
    // 5. Sum example combining different types
    // ============================================
    int a = 5;
    float b = 4.5f;
    double result = a + b;  // int + float automatically becomes double

    cout << "----- Sum Example -----" << endl;
    cout << "int a = " << a << ", float b = " << b << endl;
    cout << "Sum (a + b) = " << result << endl;

    return 0;
}