#include <iostream>   // iostream library include ki taake hum input (cin) aur output (cout) use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float radius = 0, circumference = 1;
    // Do float type variables declare kiye:
    // radius ? circle ka radius store karega
    // circumference ? circle ka circumference store karega
    // radius ko 0 se initialize kiya
    // circumference ko 1 se initialize kiya (baad me calculate hoga)

    float pi = 3.1416;
    // pi ki value 3.1416 rakhi jo circle ke formula me use hoti hai

    cout << "Enter radius: ";
    // User ko message diya ke radius enter kare

    cin >> radius;
    // User se radius ki value input li aur radius variable me store ki

    circumference = 2 * pi * radius;
    // Formula apply kiya:
    // Circumference = 2 × pi × radius
    // Pehle 2 aur pi multiply honge
    // Phir result radius se multiply hoga
    // Final result circumference variable me store hoga

    cout << "Radius = " << radius;
    // Radius ki value screen par display ki

    cout << "\nCircumference = " << circumference;
    // New line par circumference display kiya

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
