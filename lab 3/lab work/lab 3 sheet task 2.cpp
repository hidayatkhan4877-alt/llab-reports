#include <iostream>   // iostream library include ki taake hum input (cin) aur output (cout) use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function program ka starting point hota hai
{                     // main function ka body start

    float u = 0, v = 0, a = 0, t = 0;  
    // Char float type variables declare kiye:
    // u ? initial velocity store karega
    // v ? final velocity store karega
    // a ? acceleration store karega
    // t ? time store karega
    // Sab ko 0 se initialize kiya taake garbage value na aaye

    cout << "Enter initial velocity (u): ";  
    // User ko message diya ke initial velocity enter kare

    cin >> u;  
    // User se initial velocity input li aur u variable me store ki

    cout << "Enter acceleration (a): ";  
    // User ko message diya ke acceleration enter kare

    cin >> a;  
    // User se acceleration input li aur a variable me store ki

    cout << "Enter time (t): ";  
    // User ko message diya ke time enter kare

    cin >> t;  
    // User se time input li aur t variable me store ki

    v = u + (a * t);  
    // First equation of motion apply ki:
    // v = u + at
    // Pehle (a * t) calculate hoga
    // Phir us ka result u me add hoga
    // Final result v me store hoga

    cout << "\nInitial velocity = " << u;  
    // New line par initial velocity display ki

    cout << "\nAcceleration = " << a;  
    // New line par acceleration display ki

    cout << "\nTime = " << t;  
    // New line par time display ki

    cout << "\nFinal velocity = " << v;  
    // New line par calculate ki hui final velocity display ki

    return 0;  
    // Program successfully end ho gaya aur control system ko wapas chala gaya

}   // main function ka body end
