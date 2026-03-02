#include <iostream>   // iostream library include ki taake hum input (cin) aur output (cout) use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float R1=0, R2=0, Req=0;
    // Teen float type variables declare kiye:
    // R1 ? pehli resistance store karega
    // R2 ? doosri resistance store karega
    // Req ? equivalent (net) resistance store karega
    // Sab ko 0 se initialize kiya taake garbage value na aaye

    cout << "Enter resistance R1: ";
    // User ko message diya ke pehli resistance enter kare

    cin >> R1;
    // User se R1 ki value input li aur R1 variable me store ki

    cout << "Enter resistance R2: ";
    // User ko message diya ke doosri resistance enter kare

    cin >> R2;
    // User se R2 ki value input li aur R2 variable me store ki

    Req = (R1 * R2) / (R1 + R2);
    // Parallel circuit ka formula apply kiya:
    // Req = (R1 × R2) ÷ (R1 + R2)
    // Pehle R1 aur R2 multiply honge
    // Phir R1 aur R2 add honge
    // Phir multiplication ka result addition ke result se divide hoga
    // Final value Req me store hogi

    cout << "Net resistance = " << Req;
    // Screen par calculate ki hui net resistance display ki

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
