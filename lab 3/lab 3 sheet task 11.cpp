#include <iostream>   // iostream library include ki taake hum input aur output use kar saken

#include <cmath>      // cmath library include ki taake sqrt() function use kar saken

using namespace std;  // std namespace use kiya taake std:: na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float a,b,c,root1,root2,dis;
    // 6 float type variables declare kiye:
    // a, b, c ? quadratic equation ke coefficients
    // root1 ? pehla root store karega
    // root2 ? doosra root store karega
    // dis ? discriminant (b² - 4ac) store karega

    cout << "Enter a, b, c: ";
    // User ko message diya ke a, b, c ki values enter kare

    cin >> a >> b >> c;
    // User se teen values input li:
    // Pehli a me
    // Doosri b me
    // Teesri c me store hui

    dis = b*b - 4*a*c;
    // Discriminant calculate kiya:
    // b*b ka matlab b²
    // 4*a*c ka matlab 4ac
    // Formula: b² - 4ac
    // Result dis variable me store hua

    root1 = (-b + sqrt(dis))/(2*a);
    // Pehla root calculate kiya:
    // -b + sqrt(dis)
    // Phir result ko (2*a) se divide kiya
    // Final value root1 me store hui

    root2 = (-b - sqrt(dis))/(2*a);
    // Doosra root calculate kiya:
    // -b - sqrt(dis)
    // Phir result ko (2*a) se divide kiya
    // Final value root2 me store hui

    cout << "Root1 = " << root1;
    // Pehla root screen par display kiya

    cout << "\nRoot2 = " << root2;
    // Doosra root new line par display kiya

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
