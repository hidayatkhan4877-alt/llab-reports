// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate y = 2x + 4 for a given value of x

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare kiye
    float x, y;  
    // x -> user input value
    // y -> calculated value using equation

    cout << "Enter x: ";  
    cin >> x;  
    // User se x input liya aur variable me store kiya

    y = 2 * x + 4;  
    // Equation apply ki: y = 2x + 4

    cout << "y = " << y;  
    // Calculated value of y screen par display ki

    return 0;  
    // Program successfully end ho gaya
}
