// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate currents in two resistors using Current Divider Rule

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare aur initialize kiye
    float R1 = 0, R2 = 0, It = 0, I1 = 0, I2 = 0;  
    // R1 -> first resistor value
    // R2 -> second resistor value
    // It -> total current input
    // I1 -> current through R1 calculate karega
    // I2 -> current through R2 calculate karega

    cout << "Enter R1: ";  
    cin >> R1;  
    // User se R1 input liya

    cout << "Enter R2: ";  
    cin >> R2;  
    // User se R2 input liya

    cout << "Enter total current: ";  
    cin >> It;  
    // User se total current input liya

    // Current Divider Rule apply kiya
    I1 = It * (R2 / (R1 + R2));  
    I2 = It * (R1 / (R1 + R2));  

    // Results display kiye
    cout << "Current in R1 = " << I1;  
    cout << "\nCurrent in R2 = " << I2;  

    return 0;  
    // Program successfully end ho gaya
}
