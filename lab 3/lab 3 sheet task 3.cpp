#include <iostream>   // iostream library include ki taake hum cin aur cout use kar saken

using namespace std;  // std namespace use kiya taake std:: bar bar na likhna pade

int main()            // main function jahan se program start hota hai
{                     // main function ka body start

    float m1=0, m2=0, m3=0, m4=0, m5=0, average=0;
    // 5 float type variables banaye marks store karne ke liye:
    // m1 ? subject 1 ke marks
    // m2 ? subject 2 ke marks
    // m3 ? subject 3 ke marks
    // m4 ? subject 4 ke marks
    // m5 ? subject 5 ke marks
    // average ? average calculate karne ke liye
    // Sab ko 0 se initialize kiya taake garbage value na aaye

    cout << "Enter marks of 5 subjects:\n";
    // User ko message diya ke 5 subjects ke marks enter kare
    // \n ka matlab new line

    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    // User se ek sath 5 marks input liye
    // Pehla value m1 me store hogi
    // Doosri m2 me
    // Teesri m3 me
    // Chauthi m4 me
    // Panchvi m5 me

    average = (m1+m2+m3+m4+m5)/5;
    // Sab marks ko add kiya
    // Phir total ko 5 se divide kiya
    // Result average variable me store kiya

    cout << "Average marks = " << average;
    // Screen par average marks display kiye

    return 0;
    // Program successfully end ho gaya

}   // main function ka body end
