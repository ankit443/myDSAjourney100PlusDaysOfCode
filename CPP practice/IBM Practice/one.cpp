#include <iostream>
#include <string>

using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0"; // Special case: 0 in binary is 0
    }

    string binary = "";

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary; // Append the remainder to the front
        decimal /= 2;
    }

    return binary;
}

int main() {
    int decimalNumber;

    // Input the decimal number
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Check if the input is valid
    if (decimalNumber < 0) {
        cout << "Invalid input. Please enter a non-negative decimal number." << endl;
    } else {
        string binaryNumber = decimalToBinary(decimalNumber);
        cout << "Binary representation: " << binaryNumber << endl;
    }

    return 0;
}

