#include <iostream>   // iostream library include ki jati hai taake hum input (cin) aur output (cout) use kar saken

using namespace std;  // std namespace use kar rahe hain taake har jagah std:: na likhna pade

int main()            // main function program ka starting point hota hai
{                     // main function ka body start

    float voltage = 0, current = 0, resistance = 0;  
    // Teen float type variables declare kiye:
    // voltage  ? voltage ki value store karega
    // current  ? current ki value store karega
    // resistance ? calculate hone wali resistance store karega
    // Sab ko 0 se initialize kiya taake garbage value na aaye

    cout << "Enter voltage (V): ";  
    // Screen par message show kiya ke user voltage enter kare

    cin >> voltage;  
    // User se voltage ki value input li aur voltage variable me store ki

    cout << "Enter current (I): ";  
    // Screen par message show kiya ke user current enter kare

    cin >> current;  
    // User se current ki value input li aur current variable me store ki

    resistance = voltage / current;  
    // Ohm's Law ka formula apply kiya:
    // Resistance = Voltage ÷ Current
    // Yani R = V / I

    cout << "\nVoltage = " << voltage << " V";  
    // New line par voltage ki value aur unit (Volt) display ki

    cout << "\nCurrent = " << current << " A";  
    // New line par current ki value aur unit (Ampere) display ki

    cout << "\nResistance = " << resistance << " Ohm";  
    // New line par calculate ki hui resistance aur unit (Ohm) display ki

    return 0;  
    // Program successfully end ho gaya aur control system ko wapas chala gaya

}   // main function ka body end
