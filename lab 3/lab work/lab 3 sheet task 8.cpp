// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to convert Star (Y) resistances to Delta (?) resistances

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Star resistances declare aur initialize kiye
    float R1 = 0, R2 = 0, R3 = 0;  
    // R1 -> star resistor 1
    // R2 -> star resistor 2
    // R3 -> star resistor 3

    // Delta resistances declare kiye
    float D1, D2, D3;  
    // D1 -> delta resistor 1
    // D2 -> delta resistor 2
    // D3 -> delta resistor 3

    cout << "Enter star resistances:\n";  
    cin >> R1 >> R2 >> R3;  
    // User se star resistances input liye aur respective variables me store kiye

    // Delta resistances calculate kiye using formulas:
    D1 = (R1*R2 + R2*R3 + R3*R1) / R3;  
    D2 = (R1*R2 + R2*R3 + R3*R1) / R1;  
    D3 = (R1*R2 + R2*R3 + R3*R1) / R2;  

    // Display delta resistances
    cout << "Delta resistances:\n";  
    cout << D1 << " " << D2 << " " << D3;  

    return 0;  
    // Program successfully end ho gaya
}
