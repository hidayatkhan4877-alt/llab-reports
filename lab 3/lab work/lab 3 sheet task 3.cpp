// Name: Hidayat Ullah
// Registration Number: BF25NWELE0685
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)

// Program to calculate the average of 5 subject marks

#include <iostream>   // iostream library include ki gayi hai input/output ke liye
using namespace std;  // std namespace use kiya taake cout aur cin directly use ho sake

int main()            // main function: program ka starting point
{
    // 5 subject ke marks aur average ke liye variables declare kiye aur 0 se initialize kiya
    float m1=0, m2=0, m3=0, m4=0, m5=0, average=0;
    // m1 -> subject 1 marks
    // m2 -> subject 2 marks
    // m3 -> subject 3 marks
    // m4 -> subject 4 marks
    // m5 -> subject 5 marks
    // average -> 5 subjects ka average calculate karne ke liye

    cout << "Enter marks of 5 subjects:\n";  
    // User ko message diya ke 5 subjects ke marks enter kare

    cin >> m1 >> m2 >> m3 >> m4 >> m5;  
    // User se 5 marks ek sath input liye gaye aur variables me store kiye

    average = (m1 + m2 + m3 + m4 + m5) / 5;  
    // Marks ka sum calculate kiya aur 5 se divide karke average nikala

    cout << "Average marks = " << average;  
    // Calculated average screen par display kiya

    return 0;  
    // Program successfully end ho gaya
}
