#include <iostream>   // iostream library include ki taake hum input aur output use kar saken

using namespace std;  // std namespace use kiya taake std:: na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float R1=0, R2=0, R3=0;
    // Teen float type variables declare kiye:
    // R1 ? pehli star resistance
    // R2 ? doosri star resistance
    // R3 ? teesri star resistance
    // Sab ko 0 se initialize kiya

    float D1, D2, D3;
    // Teen float type variables declare kiye:
    // D1 ? pehli delta resistance
    // D2 ? doosri delta resistance
    // D3 ? teesri delta resistance

    cout << "Enter star resistances:\n";
    // User ko message diya ke 3 star resistances enter kare

    cin >> R1 >> R2 >> R3;
    // User se ek sath 3 resistances input li
    // Pehli R1 me
    // Doosri R2 me
    // Teesri R3 me store hui

    D1 = (R1*R2 + R2*R3 + R3*R1)/R3;
    // Pehli delta resistance calculate ki:
    // Formula: (R1R2 + R2R3 + R3R1) ÷ R3
    // Pehle teen multiplication honge
    // Phir sab add honge
    // Phir result R3 se divide hoga

    D2 = (R1*R2 + R2*R3 + R3*R1)/R1;
    // Doosri delta resistance calculate ki:
    // Same numerator use hua
    // Is baar R1 se divide kiya

    D3 = (R1*R2 + R2*R3 + R3*R1)/R2;
    // Teesri delta resistance calculate ki:
    // Same numerator
    // Is baar R2 se divide kiya

    cout << "Delta resistances:\n";
    // Screen par message show kiya

    cout << D1 << " " << D2 << " " << D3;
    // Teeno delta resistances ek line me display ki

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
