// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate the circumference of a circle using the formula: C = 2 * pi * r

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare aur initialize kiye
    float radius = 0, circumference = 1;  
    // radius -> user se circle ka radius input liya jayega
    // circumference -> calculate hone wali value store karega

    float pi = 3.1416;  
    // Pi ki value assign ki jo circle ke calculation me use hoti hai

    cout << "Enter radius: ";  
    cin >> radius;  
    // User se radius input liya aur variable me store kiya

    circumference = 2 * pi * radius;  
    // Formula apply kiya: Circumference = 2 × pi × radius

    // Display results
    cout << "Radius = " << radius;  
    cout << "\nCircumference = " << circumference;  

    return 0;  
    // Program successfully end ho gaya
}
