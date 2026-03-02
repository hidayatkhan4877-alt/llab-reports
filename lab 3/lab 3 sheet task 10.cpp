#include <iostream>   // iostream library include ki taake hum input aur output use kar saken

#include <cmath>      // cmath library include ki taake math functions jaise sqrt() use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float base, perp, hyp;
    // Teen float type variables declare kiye:
    // base ? triangle ka base store karega
    // perp ? triangle ka perpendicular store karega
    // hyp ? calculate hone wala hypotenuse store karega

    cout << "Enter base and perpendicular: ";
    // User ko message diya ke base aur perpendicular enter kare

    cin >> base >> perp;
    // User se do values input li:
    // Pehli base me store hui
    // Doosri perp me store hui

    hyp = sqrt(base*base + perp*perp);
    // Pythagoras theorem apply ki:
    // Pehle base*base (base^2) calculate hua
    // Phir perp*perp (perp^2) calculate hua
    // Dono ko add kiya
    // sqrt() function se square root liya
    // Final result hyp me store hua

    cout << "Hypotenuse = " << hyp;
    // Screen par calculate ki hui hypotenuse display ki

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
