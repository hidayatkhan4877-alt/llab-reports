// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate hypotenuse of a right-angled triangle using Pythagoras theorem

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
#include <cmath>      // cmath library include ki gayi hai sqrt() function ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare kiye
    float base, perp, hyp;  
    // base -> triangle ka base input ke liye
    // perp -> triangle ka perpendicular input ke liye
    // hyp -> calculate hone wala hypotenuse

    cout << "Enter base and perpendicular: ";  
    cin >> base >> perp;  
    // User se base aur perpendicular input liye aur variables me store kiye

    hyp = sqrt(base*base + perp*perp);  
    // Pythagoras theorem apply ki: hypotenuse = v(base^2 + perpendicular^2)

    cout << "Hypotenuse = " << hyp;  
    // Calculated hypotenuse screen par display ki

    return 0;  
    // Program successfully end ho gaya
}
