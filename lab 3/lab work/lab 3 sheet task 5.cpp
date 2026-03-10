// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate the area and perimeter of a rectangle

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // Variables declare aur initialize kiye
    float length = 0, width = 0, area = 1, perimeter = 1;  
    // length -> rectangle ki length input ke liye
    // width -> rectangle ki width input ke liye
    // area -> rectangle ka area calculate karne ke liye
    // perimeter -> rectangle ka perimeter calculate karne ke liye

    cout << "Enter length: ";  
    cin >> length;  
    // User se rectangle ki length input li aur variable me store ki

    cout << "Enter width: ";  
    cin >> width;  
    // User se rectangle ki width input li aur variable me store ki

    area = length * width;  
    // Area calculate kiya: Area = length × width

    perimeter = 2 * (length + width);  
    // Perimeter calculate kiya: Perimeter = 2 × (length + width)

    // Display results
    cout << "Area = " << area;  
    cout << "\nPerimeter = " << perimeter;  

    return 0;  
    // Program successfully end ho gaya
}
