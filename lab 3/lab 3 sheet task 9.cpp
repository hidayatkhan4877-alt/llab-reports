#include <iostream>   // iostream library include ki taake hum input (cin) aur output (cout) use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float x, y;
    // Do float type variables declare kiye:
    // x ? input value store karega
    // y ? calculate hone wali value store karega

    cout << "Enter x: ";
    // User ko message diya ke x ki value enter kare

    cin >> x;
    // User se x ki value input li aur x variable me store ki

    y = 2*x + 4;
    // Equation apply ki:
    // y = 2x + 4
    // Pehle 2 aur x multiply honge
    // Phir us result me 4 add hoga
    // Final value y variable me store hogi

    cout << "y = " << y;
    // Screen par calculate ki hui y ki value display ki

    return 0;
    // Program successfully end ho gaya aur control system ko wapas chala gaya

}   // main function ka body end
