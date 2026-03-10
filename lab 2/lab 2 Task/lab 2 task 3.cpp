// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program: Convert Celsius to Fahrenheit

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    float celsius, fahrenheit;  // Do float variables declare kiye: Celsius aur Fahrenheit

    // User se Celsius temperature input lene ke liye message
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;  // User ka input celsius variable me store hua

    // Celsius ko Fahrenheit me convert karna
    // Formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    // Result display karna
    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl;

    return 0;   // Program successfully end ho gaya
}
