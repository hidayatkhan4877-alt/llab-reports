#include <iostream>   // iostream library include ki taake hum cin aur cout use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float length=0, width=0, area=1, perimeter=1;
    // Char float type variables declare kiye:
    // length ? rectangle ki lambai store karega
    // width ? rectangle ki chaurai store karega
    // area ? calculate hone wala area store karega
    // perimeter ? calculate hone wala perimeter store karega
    // length aur width ko 0 se initialize kiya
    // area aur perimeter ko 1 se initialize kiya (baad me calculate honge)

    cout << "Enter length: ";
    // User ko message diya ke rectangle ki length enter kare

    cin >> length;
    // User se length ki value input li aur length variable me store ki

    cout << "Enter width: ";
    // User ko message diya ke rectangle ki width enter kare

    cin >> width;
    // User se width ki value input li aur width variable me store ki

    area = length * width;
    // Rectangle ka area calculate kiya:
    // Area = length × width
    // Result area variable me store hua

    perimeter = 2 * (length + width);
    // Rectangle ka perimeter calculate kiya:
    // Perimeter = 2 × (length + width)
    // Pehle (length + width) add hoga
    // Phir result 2 se multiply hoga
    // Final value perimeter variable me store hogi

    cout << "Area = " << area;
    // Screen par calculate kiya hua area display kiya

    cout << "\nPerimeter = " << perimeter;
    // New line par calculate kiya hua perimeter display kiya

    return 0;
    // Program successfully end ho gaya aur control system ko wapas chala gaya

}   // main function ka body end
