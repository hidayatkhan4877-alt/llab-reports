#include <iostream>   // iostream library include ki taake hum cin aur cout use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna na pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float R1=0, R2=0, It=0, I1=0, I2=0;
    // 5 float type variables declare kiye:
    // R1 ? pehli resistance store karega
    // R2 ? doosri resistance store karega
    // It ? total current store karega
    // I1 ? R1 me current calculate hoga
    // I2 ? R2 me current calculate hoga
    // Sab ko 0 se initialize kiya taake garbage value na aaye

    cout << "Enter R1: ";
    // User ko message diya ke R1 enter kare

    cin >> R1;
    // User se R1 ki value input li aur R1 variable me store ki

    cout << "Enter R2: ";
    // User ko message diya ke R2 enter kare

    cin >> R2;
    // User se R2 ki value input li aur R2 variable me store ki

    cout << "Enter total current: ";
    // User ko message diya ke total current (It) enter kare

    cin >> It;
    // User se total current input li aur It variable me store ki

    I1 = It * (R2 / (R1 + R2));
    // Current Divider Rule apply kiya:
    // I1 = It × (R2 ÷ (R1 + R2))
    // Pehle (R1 + R2) add hoga
    // Phir R2 us se divide hoga
    // Phir result It se multiply hoga
    // Final result I1 me store hoga

    I2 = It * (R1 / (R1 + R2));
    // Doosra formula apply kiya:
    // I2 = It × (R1 ÷ (R1 + R2))
    // Same process follow hoga
    // Final result I2 me store hoga

    cout << "Current in R1 = " << I1;
    // Screen par R1 me flow hone wala current display kiya

    cout << "\nCurrent in R2 = " << I2;
    // New line par R2 me flow hone wala current display kiya

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
