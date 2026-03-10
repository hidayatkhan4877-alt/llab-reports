// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate net resistance of two resistors in parallel

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare aur initialize kiye
    float R1 = 0, R2 = 0, Req = 0;  
    // R1 -> first resistor value input ke liye
    // R2 -> second resistor value input ke liye
    // Req -> equivalent resistance calculate karne ke liye

    cout << "Enter resistance R1: ";  
    cin >> R1;  
    // User se first resistor input liya aur R1 me store kiya

    cout << "Enter resistance R2: ";  
    cin >> R2;  
    // User se second resistor input liya aur R2 me store kiya

    Req = (R1 * R2) / (R1 + R2);  
    // Parallel resistance formula apply kiya: Req = (R1 × R2) ÷ (R1 + R2)

    cout << "Net resistance = " << Req;  
    // Calculate ki hui equivalent resistance display ki

    return 0;  
    // Program successfully end ho gaya
}
